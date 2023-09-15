class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*
            using set and comparing set to orignal
        */
        return nums.size() > unordered_set<int>(nums.begin(),nums.end()).size();
    }
};