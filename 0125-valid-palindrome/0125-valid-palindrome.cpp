class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        for(int k=0; k<s.size(); k++)
            if(s[k]>64 && s[k]<91)
                s[k] += 32;
        
        while(i < j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            //cout<<s[i]<<s[j]<<" ";
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};