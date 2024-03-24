class Solution {
    bool isPalindrome(string s){
        string t = s;
        reverse(s.begin(), s.end());
        return s==t;
    }
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;

        while(l < r){
            if(s[l] != s[r]){
                cout<<s.substr(l, r-l);
                return isPalindrome(s.substr(l, r-l)) || isPalindrome(s.substr(l+1, r-l));
            }
            l++;
            r--;
        }

        return true;
    }
};