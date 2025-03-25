#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int countDistinctWays(int nStairs)
{
    vector<int>dp(nStairs+1);
    dp[0]=dp[1]=1;
    for(int i=2; i<=nStairs; ++i)
        dp[i]=(dp[i-1]+dp[i-2])%MOD;
    return dp[nStairs];
}