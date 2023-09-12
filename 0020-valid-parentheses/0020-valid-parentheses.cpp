class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        int size = s.size();        

        for(int i=0; i<size; i++){
            if(s[i] == '('){
                stack.push(')');
            }
            else if(s[i] == '{'){
                stack.push('}');
            }
            else if(s[i] == '['){
                stack.push(']');
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(stack.empty() || s[i] != stack.top())
                    return false;
                else{
                    stack.pop();
                }
            }
        }
        return stack.empty();
    }
};