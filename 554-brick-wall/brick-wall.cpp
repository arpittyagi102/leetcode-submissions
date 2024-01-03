class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int ans = 0;
        unordered_map<int,int> mp;
        vector<vector<int>> pre(wall.size());
        for(int i=0; i<wall.size(); i++){
            pre[i].push_back(wall[i][0]);
            for(int j=1; j<wall[i].size(); j++){
                pre[i].push_back(pre[i][j-1]+wall[i][j]);
            }
        }

        for(vector<int> t: pre){
            for(int i=0; i<t.size()-1; i++){
                mp[t[i]]++;
            }
        }

        // for(vector<int> t: pre){
        //     for(int a: t){
        //         cout<<a<<" ";
        //     }   cout<<endl;
        // }

        for(auto one: mp){
            ans = max(ans,one.second);
        }
        //cout<<wall.size();
        //cout<<" "<<ans;

        return wall.size()-ans;
    }
};

// KPPKKP
// KKKPKK
// KPPPKK
// KKPPPP
// KKKPKK
// KPPPKP