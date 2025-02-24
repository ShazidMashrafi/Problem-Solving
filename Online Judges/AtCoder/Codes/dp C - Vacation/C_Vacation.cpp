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
    int n;
    cin >> n;
    vector<vector<int>>vec(n, vector<int>(3));
    vector<vector<int>>ans(n, vector<int>(3));
    rep(i, 0, n)
    {
        rep(j, 0, 3)
            cin >> vec[i][j];
    }
    ans[0][0] = vec[0][0];
    ans[0][1] = vec[0][1];
    ans[0][2] = vec[0][2];

    for(int i=1; i<n; ++i)
    {
        ans[i][0] = vec[i][0] + max(ans[i-1][1], ans[i-1][2]);
        ans[i][1] = vec[i][1] + max(ans[i-1][0], ans[i-1][2]);
        ans[i][2] = vec[i][2] + max(ans[i-1][1], ans[i-1][0]);
    }

    cout << max({ans[n-1][0], ans[n-1][1], ans[n-1][2]}) << endl;
}

signed main()
{
    FAST;
    int TCS = 1;
    // cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}