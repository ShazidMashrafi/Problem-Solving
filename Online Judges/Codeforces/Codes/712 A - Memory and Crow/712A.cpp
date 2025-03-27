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

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n), a(n);
    for (auto &&i : b)
    {
        cin >> i;
    }
    // dbg(b);
    int p = 0, q = 0;
    bool f = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int d = b[i];
        if(f)
        {
            a[i] = d - p + q;
            p += a[i];
            f = 0;
        }
        else
        {
            a[i] = d + p - q;
            q += a[i];
            f = 1;
        }
    }
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}

signed main()
{
    FAST;
    // freopen("input.txt", "r", stdin);    
    // freopen("output.txt", "w", stdout);  

    int TCS = 1;
    // cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}