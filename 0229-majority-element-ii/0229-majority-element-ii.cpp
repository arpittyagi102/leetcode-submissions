class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size()/3;

        for(int i : nums){
            mp[i]++;
        }

        nums.clear();

        for(auto pair : mp){
            if(pair.second > n){
                nums.push_back(pair.first);
            }
        }

        return nums;
    }
};