#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include <debug.h>
#endif
#define  int  long long
#define  ll  long long
#define  endl  '\n'
#define  ff  first
#define  ss  second
#define  pb  push_back
#define  sz(x)  (int)(x).size()
#define  all(x)  x.begin(), x.end()
#define  yn(f)  f? cout<<"YES\n":cout<<"NO\n"
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll power(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &&i : v)
        cin >> i;

    sort(all(v));
    int s = 0, i = 0;
    while (i < n && s <= 1) 
    {
        s = (s + v[i]) % mod;
        i++;
    }

    while(i < n)
    {
        if (v[i] > 1) s = (s * v[i]) % mod;
        else s = (s + v[i]) % mod;
        i++;
    }
    cout << s << endl;
}

signed main()
{
    FAST;
    // freopen("input.txt", "r", stdin);    
    // freopen("output.txt", "w", stdout);  

    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}