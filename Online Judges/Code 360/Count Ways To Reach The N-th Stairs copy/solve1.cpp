#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int sol(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = (sol(n - 1, dp) + sol(n - 2, dp)) % MOD;
}
int countDistinctWays(int nStairs)
{
    vector<int> dp(nStairs + 1, -1);
    int ans = sol(nStairs, dp);
    return ans;
}