class Solution {
public:
    bool halvesAreAlike(string s) {
        int i=0;
        int ans = 0;

        for(; i<s.size()/2; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                ans++;
            }
        }

        for(; i<s.size(); i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                ans--;
            }
        }

        return ans==0;
    }
};