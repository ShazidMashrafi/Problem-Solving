#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;

long long int countDerangements(int n) 
{
    vector<long long>dp(n+1,-1);
    dp[1]=0,dp[2]=1;
    for(int i=3; i<=n; ++i)
        dp[i]=(i-1)*(dp[i-1]+dp[i-2])%MOD;
    return dp[n];
}