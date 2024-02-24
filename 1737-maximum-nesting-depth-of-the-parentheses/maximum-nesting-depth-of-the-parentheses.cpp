class Solution {
public:
    int maxDepth(string s) {
        stack<bool> sk;
        int ans;

        for(char c: s){
            if(c=='(')
                sk.push(true);
            else if(c==')')
                sk.pop();
            ans = max(ans, (int)sk.size());
        }

        return ans;
    }
};