#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include "Assets/debug.h"
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    if(a>c)
    {
        if(b>=d) ans++;
    }
    if(a==c)
    {
        if(b>d) ans++;
    }
    if(a>d)
    {
        if(b>=c)    ans++;
    }
    if(a==d)
    {
        if(b>c) ans++;
    }
    if(b>c)
    {
        if(a>=d)   ans++;
    }
    if(b==c)
    {
        if(a>d) ans++;
    }
    if(b>d)
    {
        if(a>=c) ans++;
    }
    if(b==d)
    {
        if(a>c) ans++;
    }
    cout<<ans<<endl;
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