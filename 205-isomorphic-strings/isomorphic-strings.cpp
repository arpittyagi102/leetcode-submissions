class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>  mp;
        unordered_map<char, char>  mp2;

        for(int i=0; i<s.size(); i++){
            if(mp.count(s[i]) && mp[s[i]]!=t[i]){
                return false;
            }
            mp[s[i]]=t[i];
            if(mp2.count(t[i]) && mp2[t[i]]!=s[i]){
                return false;
            }
            mp2[t[i]]=s[i];
        }

        return true;
    }
};