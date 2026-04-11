class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int minDistance = INT_MAX;
        int ans = -1;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }

        for(auto &pair : mp){
            if (pair.second.size() < 3) continue;
            
            for(int j=0; j<pair.second.size()-2; j++){
                if(minDistance > (pair.second[j+2] - pair.second[j])){
                    minDistance = (pair.second[j+2] - pair.second[j]);
                    ans = (pair.second[j+2] - pair.second[j]) * 2;
                }
            }
        }

        return ans;
    }
};