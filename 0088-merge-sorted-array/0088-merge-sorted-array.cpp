class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //vector<int> ans;

        /*for(int i=0; i<m; i++){
            ans.push_back(nums1[i]);
        }*/
        int k = nums1.size() - m;
        for(int i=0; i<k; i++){
            nums1.pop_back();
        }

        for(int i=0; i<n; i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(),nums1.end());
    }
};