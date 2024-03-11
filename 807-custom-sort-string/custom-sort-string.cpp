class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        int k = 0;

        for(char i='a',j=50; i<='z'; i++,j++){
            mp[i] = j;
        }

        for(char c: order){
            mp[c] = k++;
        }

        sort(s.begin(), s.end(),[&mp](const auto& a, const auto& b){
            return mp[a] < mp[b];
        });

        return s;
    }
};