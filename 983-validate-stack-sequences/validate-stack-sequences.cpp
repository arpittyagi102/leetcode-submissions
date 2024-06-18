class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        // Intialise one pointer pointing on popped array
        int j = 0;
        for(int i = 0;i < pushed.size() ;i++){
            s.push(pushed[i]);
            // if st.peek() values equal to popped[j] then pop
            while(s.size() > 0 && s.top() == popped[j]){
                s.pop();
                j++;
            }
        }
        //if stack is empty return true else false
        return s.empty();
    }
};