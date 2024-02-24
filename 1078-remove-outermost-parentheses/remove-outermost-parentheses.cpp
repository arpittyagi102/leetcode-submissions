class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> sk;
        string ans = "";

        for(char c: s){
            if(c=='('){
                if(!sk.empty()){
                    ans += c;
                }
                sk.push(c);
            } else {
                sk.pop();
                if(!sk.empty()){
                    ans += c;
                }
            }
        }

        return ans;
    }
};