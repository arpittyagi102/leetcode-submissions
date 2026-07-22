class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(temperatures.size(),0);
        stack<int> sk;

        for(int i=0; i<n; i++) {
            while(!sk.empty() && temperatures[sk.top()] < temperatures[i]) {
                ans[sk.top()] = i - sk.top();
                sk.pop();
            }
            sk.push(i);
        }

        return ans;
    }
};