class Solution {
    int helper(int n, vector<int>& dp){
        if(n < 3){
            return n;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n] = helper(n-1, dp) + helper(n-2, dp);

        return dp[n];
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);

        return helper(n, dp);
    }
};