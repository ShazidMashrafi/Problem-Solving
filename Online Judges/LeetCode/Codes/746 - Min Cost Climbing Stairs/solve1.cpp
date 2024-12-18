class Solution 
{
public:
    int solve(int n,vector<int>&cost, vector<int>&dp)
    {
        if(n==0)    return cost[0];
        if(n==1)    return cost[1];
        if(dp[n]!=-1) return dp[n];
        return dp[n]=min(solve(n-1,cost,dp),solve(n-2,cost,dp))+cost[n];
    }
    int minCostClimbingStairs(vector<int>&cost) 
    {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        int ans=min(solve(n-1,cost,dp),solve(n-2,cost,dp));
        return ans;
    }
};