class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(nums1.begin(),nums1.end());
        unordered_set<int> st2(nums2.begin(),nums2.end());

        for(int i: nums2){
            if(st1.find(i)!=st1.end()){
                st1.erase(i);
                st2.erase(i);
            }   
        }

        vector<int> diff1(st1.begin(), st1.end());
        vector<int> diff2(st2.begin(), st2.end());

        return {diff1, diff2};
    }
};