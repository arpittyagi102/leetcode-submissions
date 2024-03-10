class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;

        for(int i: nums1){
            if(find(nums2.begin(), nums2.end(), i)!=nums2.end()){
                st.insert(i);
            }
        }

        return {st.begin(), st.end()};
    }
};