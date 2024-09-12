class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st{allowed.begin(), allowed.end()};
        int consistentStrings = 0;

        for(string word: words){
            bool isConsistent = true;
            for(char c: word){
                if(!st.count(c)){
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