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

int fun(vector<vector<bool>>&v, int i, int j, int h, int w)
{
    if(i < 0 || i >= h || j < 0 || j >= w ) return 0;
    if(v[i][j] == '#' || v[i][j] == 0)  return 0;
    v[i][j] = 0;
    int ct = 1;
    ct += fun(v, i - 1, j, h, w);
    ct += fun(v, i + 1, j, h, w);
    ct += fun(v, i, j - 1, h, w);
    ct += fun(v, i, j + 1, h, w);
    return ct;
}

void solve()
{
    int w, h;
    cin >> w >> h;
    // dbg(w, h);
    vector<vector<bool>> v(h, vector<bool>(w, 0));
    // dbg(v);
    int px, py;
    rep(i, 0, h)
    {
        rep(j, 0, w)
        {
            char c;
            cin >> c;
            if(c == '.')
                v[i][j] = 1;
            if(c == '@')
            {
                v[i][j] = 1;
                px = i;
                py = j;
            }
        }
    }
    // dbg(v);
    // dbg(px, py);
    int ans = fun(v, px, py, h, w);
    cout << ans << endl;
}

signed main()
{
    FAST;
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        cout<<"Case "<<TC<<": ";
        solve();
    }
}