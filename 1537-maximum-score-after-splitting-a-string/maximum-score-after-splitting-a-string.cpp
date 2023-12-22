class Solution {
public:
    int maxScore(string s) {
        int ans;
        for(int i=0; i<s.size()-1; i++){
            int score = 0;
            for(int j=0; j<=i; j++){
                if(s[j] == '0'){
                    score ++;
                }
            }

            for(int j=i+1; j<s.size(); j++){
                if(s[j]=='1'){
                    score++;
                }
            }

            ans = max(ans, score);
        }

        return ans;
    }
}; 