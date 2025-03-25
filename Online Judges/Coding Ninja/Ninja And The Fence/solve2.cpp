#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int MOD = 1e9 + 7;

ll add(ll a, ll b)
{
    return (a % MOD + b % MOD) % MOD;
}

ll mul(ll a, ll b)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}

int numberOfWays(int n, int k)
{
    vector<ll> dp(n + 1, INT_MIN);
    dp[1]=k;
    dp[2]= add(k,mul(k-1,k));
    for(int i=3; i<=n; ++i)
    {
        ll same=mul(dp[i-2],k-1);
        ll diff=mul(dp[i-1],k-1);
        dp[i]=add(same,diff);
    }
    return dp[n];
}