class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mp;
        int ans = 0;

        for(char c: s){
            mp[c]++;
        }

        for(char c: t){
            mp[c]--;
        }

        for(auto i: mp){
            if(i.second > 0){
                ans += i.second;
            }
        }

        return ans;
    }
};