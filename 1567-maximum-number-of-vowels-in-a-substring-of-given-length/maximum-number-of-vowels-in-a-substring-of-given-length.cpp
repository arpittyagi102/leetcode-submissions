class Solution {
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
public:
    int maxVowels(string s, int k) {
        int ans = 0;
        int cur = 0;

        for(int i=0; i<k; i++){
            if(isVowel(s[i])){
                cur++;
            }
        }
        ans = cur;

        for(int i=1; i<(s.size()-k+1); i++){
            if(isVowel(s[i-1])){
                cur--;
            }
            if(isVowel(s[i+k-1])){
                cur++;
                ans = max(ans, cur);
            }
        }

        return ans;
    }
};