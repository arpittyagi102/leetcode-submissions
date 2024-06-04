class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int ans = 0;
        bool extra = false;

        for(char c: s){
            mp[c]++;
        }

        for(auto const pair: mp){
            if(pair.second%2==0){
                ans += pair.second;
            } else {
                ans += pair.second - 1;
                extra = true;
            }
        }

        return extra ? ans+1 : ans;
    }
};