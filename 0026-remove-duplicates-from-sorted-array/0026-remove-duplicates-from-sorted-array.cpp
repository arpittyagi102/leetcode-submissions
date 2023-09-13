class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> myset = {nums.begin(),nums.end()};
        nums.clear();

        for(int i : myset){
            nums.push_back(i);
        }

        return nums.size();
    }
};