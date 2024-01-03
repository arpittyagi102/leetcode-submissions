class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> mp;
        int ans = 0;

        for(vector<int> row: wall){
            int n = 0;
            for(int i=0; i<row.size()-1; i++){
                n += row[i];
                mp[n]++;
            }   
        }

        for(auto one: mp){
            ans = max(ans, one.second);
        }

        return wall.size()-ans;
    }
};
