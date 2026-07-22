class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans = prices;
        stack<int> sk;

        for (int i=0; i<prices.size(); i++) {
            while (!sk.empty() && prices[sk.top()] >= prices[i]) {
                ans[sk.top()] -= prices[i];
                sk.pop();
            }
            sk.push(i);
        }

        return ans;
    }
};
