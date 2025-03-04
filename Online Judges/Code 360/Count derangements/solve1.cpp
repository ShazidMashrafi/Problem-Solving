#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long solve(long long n, vector<long long>&dp)
{
    if(n==1)    return 0;
    if(n==2)    return 1;
    if(dp[n]!=-1)   return dp[n];
    dp[n]=(n-1)*(solve(n-1,dp)+solve(n-2,dp))%MOD;
    return dp[n];
}

long long int countDerangements(int n) 
{
    vector<long long>dp(n+1,-1);
    return solve(n,dp);
}