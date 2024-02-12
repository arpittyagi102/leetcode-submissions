class Solution {
    int solve(vector<int>& cost,int i,int n,vector<int>&dp){
        if(i>=n)
            return 0;
        if(i==n-1)
            return cost[n-1];
        if(dp[i]!=-1)
            return dp[i];

        int one = cost[i]+solve(cost,i+1,n,dp);
        int two = cost[i]+solve(cost,i+2,n,dp);
        return dp[i] = min(one,two);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,-1);
        
        return min(solve(cost,0,n,dp),solve(cost,1,n,dp));
    }
};