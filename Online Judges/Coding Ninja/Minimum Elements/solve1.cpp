#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&num, int x,vector<int>&dp)
{
    if(x==0)    return 0;
    if(x<0)     return INT_MAX;
    if(dp[x]!=-1)   return dp[x];
    int mn=INT_MAX;
    for(int i=0; i<num.size(); ++i)
    {
        int ans=solve(num,x-num[i],dp);
        if(ans!=INT_MAX)
            mn = min(mn, 1+ans);
    }
    return dp[x]=mn;
} 
int minimumElements(vector<int> &num, int x)
{
    vector<int>dp(x+1,-1);
    int ans=solve(num,x,dp);
    if(ans==INT_MAX)    ans=-1;
    return ans;
}