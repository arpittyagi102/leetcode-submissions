class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> st(26,false);
        int consistentStrings = 0;

        for(char c: allowed){
            st[c-'a'] = true;
        }

        for(string word: words){
            bool isConsistent = true;
            for(char c: word){
                if(st[c-'a']==false){
                    isConsistent = false;
                    break;
                }
            }

            if(isConsistent){
                consistentStrings++;
            }
        }

        return consistentStrings;
    }
};