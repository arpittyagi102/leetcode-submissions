class Solution {
    bool isPalindrome(string s){
        string t = s;
        reverse(s.begin(), s.end());
        return s==t;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(string word: words){
            if(isPalindrome(word)){
               return word;
            }
        }

        return "";
    }
};