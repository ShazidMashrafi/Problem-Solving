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
    ll pre2 = k;
    ll pre1 = add(k, mul(k - 1, k));
    for (int i = 3; i <= n; ++i)
    {
        ll same = mul(pre2, k - 1);
        ll diff = mul(pre1, k - 1);
        ll ans = add(same, diff);
        pre2=pre1;
        pre1=ans;
    }
    return pre1;
}