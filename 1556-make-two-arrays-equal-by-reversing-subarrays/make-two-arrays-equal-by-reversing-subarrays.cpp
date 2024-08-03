class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> mp;

        for(int i: arr){
            mp[i]++;
        }
        
        for(int t: target){
            mp[t]--;
            if(mp[t] == 0){
                mp.erase(t);
            }
        }

        return mp.size() == 0;
    }
};