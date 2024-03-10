class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        unordered_set<int> nums2Set(nums2.begin(), nums2.end());

        for(int i: nums1){
            if(find(nums2Set.begin(), nums2Set.end(), i)!=nums2Set.end()){
                st.insert(i);
            }
        }

        return {st.begin(), st.end()};
    }
};