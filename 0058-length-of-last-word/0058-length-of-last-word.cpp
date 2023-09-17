class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = 0;
        int count = 0;

        for(i=n-1; i>=0; i--){
            if(s[i] != ' ')
                break;
        }
        cout<<s[i];
        for(; i>=0; i--){
            if(s[i]==' ')
                break;
            count++;
        }

        return count;
    }
};