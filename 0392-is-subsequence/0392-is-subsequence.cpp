class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tsize = t.size();
        int j=0;
        for(int i=0; i<tsize; i++){
            if(t[i] == s[j]){
                cout<<s[j];
                j++;
            }
        }

        return j==s.size();
    }
};