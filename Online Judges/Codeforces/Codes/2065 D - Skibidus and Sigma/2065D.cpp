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
    unordered_map<int, vector<int>> mp;
    vector<pair<int, int>> w;
    rep(i, 0, n)
    {
        int sum = 0;
        vector<int>temp;
        rep(j, 0, m)
        {
            int x;
            cin >> x;
            sum += x;
            temp.push_back(x);
        }
        mp[i]=temp;
        w.push_back({sum, i});
    }
    sort(all(w), greater<pair<int,int>>());
    vector<int>v;
    for(auto [sum, i]:w)
    {
        for(int j=0; j<sz(mp[i]); ++j)
        {
            v.push_back(mp[i][j]);
        }
    }
    // dbg(v);
    vector<int>ans(sz(v) + 1);
    for(int i=1; i<=sz(v); ++i)
    {
        ans [i] = v[i-1] + ans[i-1];
    }
    int sum = accumulate(all(ans), 0ll);
    cout << sum << endl;
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