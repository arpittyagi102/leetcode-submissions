class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int num: nums)
            if(st.insert(num).second == 0)
                return true;
        
        return false;
    }
};