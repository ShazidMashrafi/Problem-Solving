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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    sort(all(b));
    
    int dp = -1e18;
    bool ok = true;
    
    for (int i = 0; i < n; i++)
    {
        int mx = LLONG_MAX;
        if (a[i] >= dp)
            mx = min(mx, a[i]);
        
        int need = dp + a[i];
        auto it = lower_bound(all(b), need);
        if (it != b.end())
        {
            int x = (*it) - a[i];
            if (x >= dp)
                mx = min(mx, x);
        }
        
        if (mx == LLONG_MAX)
        {
            ok = false;
            break;
        }
        dp = mx;
    }
    
    cout << (ok ? "YES" : "NO") << "\n";
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