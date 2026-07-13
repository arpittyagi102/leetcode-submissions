class Solution {
    string solve(int a, int b, string method) {
        if(method == "+")
            return to_string(a+b);
        else if(method == "-")
            return to_string(a-b);
        else if(method == "*")
            return to_string(a*b);
        else if(method == "/")
            return to_string(a/b);

        return "0";
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> sk;

        for(int i=0; i<tokens.size(); i++) {
            if(tokens[i] == "+" || 
               tokens[i] == "-" || 
               tokens[i] == "*" || 
               tokens[i] == "/"
            ) {
                int a = stoi(sk.top()); sk.pop();
                int b = stoi(sk.top()); sk.pop();
                sk.push(solve(b,a,tokens[i]));
            } else {
                sk.push(tokens[i]);
            }
        }

        return stoi(sk.top());
    }
};