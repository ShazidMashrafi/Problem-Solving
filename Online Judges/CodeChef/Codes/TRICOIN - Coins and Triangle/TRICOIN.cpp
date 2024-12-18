#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ul unsigned long long
#define pb push_back
#define ss second
#define ff first
#define fr(m) for (int i = 0; i < m; i++)
#define fro(m) for (int i = 1; i < m; i++)
#define frj(m) for (int j = 0; j < m; j++)
#define frr(n) for (int i = n; i >= 0; i--)
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define all(x) x.begin(), x.end()
#define dbg(x) cerr << #x << " " << x << endl;
#define fast_io (ios_base::sync_with_stdio(false), cin.tie(NULL));

ll fact(ll n)
{
    if (n == 0)
        return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r) { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
ll mypow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a);
        b /= 2;
        a = (a * a);
    }
    return ans;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

#define PI 3.141592653589793238;
#define INF LONG_LONG_MAX;
#define MOD 1e9 + 7;

//////////////////////////////////Code Start/////////////////////////////////////

void solve()
{
    int n, i, m;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (i = 1; i < n; i++)
    {
        m = (i * i + i) / 2;
        if (m > n)
            break;
    }
    cout << i - 1 << endl;
}

int main()
{
    fast_io;
    int TC = 1;
    cin >> TC;
    while (TC--)
        solve();
}