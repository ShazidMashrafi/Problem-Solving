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

bool cmp(pair<int, int> a,pair<int,int> b)
{
    if(a.ff ==  b.ff) return a.ss > b.ss;
    return a.ff < b.ff;
}

void solve()
{
    int n, p;
    cin >> n >> p;
    vector<pair<int,int>>v(n);
    rep(i, 0, n)    cin>>v[i].ss;
    rep(i, 0, n)    cin>>v[i].ff;
    sort(all(v));

    int rem = n - 1, ans = p;   
    rep(i, 0, n)
    {
        if(v[i].ff >= p) break;
        int ct = min(rem, v[i].ss);
        ans += ct * v[i].first;
        rem -= ct;
    }
    ans += rem * p;
    cout << ans << endl;
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