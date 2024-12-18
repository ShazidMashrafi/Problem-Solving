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
    int n ,k;
    cin >> n>> k;
    map<int,int>m;
    rep(i,0,n)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    dbg(m);
    int mx=0, ct=0, last=-1, i=-1;
    for(auto [x,y]:m)
    {
        dbg(last, x, y,i);
        if(x!=last+1)
        {
            i = x;
            ct = 0;
            dbg(i,ct);
        }
        if(x-i>=k) 
        {
            dbg(m[x-k]);
            ct -= m[x-k];
        }
        ct += y;
        last = x;
        mx = max(mx,ct);
        dbg(ct, mx);
    }
    cout << mx << endl;
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