class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*
            using set and comparing set to orignal
        */
        unordered_set<int> myset;

        for(auto i : nums)
            myset.insert(i);

        return myset.size()!=nums.size();
    }
};