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

ll solve(ll n, ll k, vector<ll> &dp)
{
    if (n == 1)
        return k;
    if (n == 2)
        return add(k, mul(k, k - 1));
    if (dp[n] != -1)
        return dp[n];
    ll same = mul(solve(n - 2, k, dp), k - 1);
    ll diff = mul(solve(n - 1, k, dp), k - 1);
    return dp[n] = add(same, diff);
}

int numberOfWays(int n, int k)
{
    vector<ll> dp(n + 1, -1);
    return solve(n, k, dp);
}