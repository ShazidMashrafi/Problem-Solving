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
    vector<int>h, l, w;
    rep(i, 0, n)
    {
        int x, y, z;
        cin >> x >> y >> z;
        h.push_back(x);
        l.push_back(y);
        w.push_back(z);
    }
    sort(all(h)); 
    sort(all(l)); 
    sort(all(w)); 
    int height = accumulate(all(h), 0);
    int length = accumulate(all(l), 0);
    int width = accumulate(all(w), 0);
    int ans1 = height * l.back() * w.back();
    int ans2 = h.back() * length * w.back();
    int ans3 = h.back() * l.back() * width;
    cout << min({ans1, ans2, ans3}) << endl;
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