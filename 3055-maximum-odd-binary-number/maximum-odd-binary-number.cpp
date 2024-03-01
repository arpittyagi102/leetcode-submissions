class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int zeros = 0, ones = 0;

        for(char c: s){
            if(c=='0')
                zeros++;
            else 
                ones++;
        }

        return string(ones-1,'1') + string(zeros,'0') + '1';
    }
};