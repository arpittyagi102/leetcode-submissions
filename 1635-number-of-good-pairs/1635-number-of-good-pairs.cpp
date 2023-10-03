class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count = 0;

        for(int i : nums){
            mp[i]++;
        }

        for(auto i : mp){
            if(i.second > 1){
                count += (i.second*(i.second-1))/2;
            }
        }

        return count;
    }
};