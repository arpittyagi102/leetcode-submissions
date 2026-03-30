class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int> mp(52);

        for(int i=0; i<s1.size(); i++) {
            int offset = (i & 1) * 26;
            mp[s1[i] - 'a' + offset]++;
            mp[s2[i] - 'a' + offset]--;
        }

        for(int count: mp)
            if(count)
                return false;

        return true;    
    }
};