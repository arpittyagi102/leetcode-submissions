class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        unordered_map<char,char> rev;
        rev[')'] = '(';
        rev['}'] = '{';
        rev[']'] = '[';

        for(char c: s){
            if(c=='(' || c=='{' || c=='['){
                sk.push(c);
            } else if(c==')' || c=='}' || c==']') {
                if(sk.size() > 0 && sk.top() == rev[c]){
                    sk.pop();
                } else {
                    return false;
                }
            }
        }

        return sk.size() ? false : true;
    }
};