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
#define  ins  insert
#define  pb  push_back
#define  ppb  pop_back
#define  sz(x)  (int)(x).size()
#define  all(x)  x.begin(), x.end()
#define  rep(i,a,b)  for(int i=a; i<b; ++i)
#define  rrep(i,a,b) for(int i=a; i>=b; --i)
#define  yn(f)  f? cout<<"YES\n":cout<<"NO\n"
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto &i: a) cin >> i;
    if(n==k)
    {
        vector<int>b;
        for(int i=1; i<n; i+=2)
            b.push_back(a[i]);
        rep(i, 0, sz(b))
        {
            if(b[i] != i + 1)
            {
                cout << i + 1 << endl;
                return;
            }
        }
        cout << sz(b) + 1 << endl;
    }
    else
    {
        for(int i = 1; i < n - k + 2; ++i)
        {
            if(a[i] != 1)
            {
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;

    }
}

signed main()
{
    FAST;
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}