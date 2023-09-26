class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        unordered_map<int, int> mp;
        int ek = -1;

        for(int i=0; i<nums2.size(); i++){
            for(int j=i+1; j<nums2.size(); j++){
                if(nums2[i] < nums2[j]){
                    ek = nums2[j];
                    break;
                }
            }
            mp[nums2[i]] = ek;
            ek = -1;
        }

        for(int i=0; i<nums1.size(); i++){
            nums1[i] = mp[nums1[i]];
        }  

        return nums1;
    }

};