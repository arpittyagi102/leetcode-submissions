class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int zeros = 0, ones = 0;
        string ans = "1";
        for(char c: s){
            if(c=='0')
                zeros++;
            else 
                ones++;
        }

        for(int i=0; i<zeros; i++){
            ans = '0' + ans;
        }
        for(int i=0; i<ones-1; i++){
            ans = '1' + ans;
        }

        return ans;
    }
};