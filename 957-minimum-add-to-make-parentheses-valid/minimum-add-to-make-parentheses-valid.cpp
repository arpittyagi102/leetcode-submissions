class Solution {
public:
    int minAddToMakeValid(string s) {
        int unclosed = 0;
        stack<char> sk;
        
        for(char c : s){
            if(c == '('){
                sk.push(c);
            } else if(c == ')'){
                if(sk.empty()){
                    unclosed++;
                } else {
                    sk.pop();
                }
            }
        }

        return unclosed + sk.size();
    }
};