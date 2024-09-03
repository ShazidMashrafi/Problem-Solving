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
    int n;
    cin>>n;
    vector<bool>one(n+10,false),zero(n+10,false);
    int ct_one=0, ct_zero=0;
    rep(i,0,n)
    {
        int x,y;
        cin>>x>>y;
        if(y) 
        {
            one[x]=1;
            ct_one++;
        }
        else 
        {
            zero[x]=1;
            ct_zero++;
        }
    }
    dbg(one,zero);
    dbg(ct_one, ct_zero);
    int ans=0;
    rep(i,0,n)
    {
        if(one[i] && zero[i])  ans += ct_one+ct_zero-2;
        if(one[i] && zero[i+1] && one[i+2])     ans++;
        if(zero[i] && one[i+1] && zero[i+2])    ans++; 
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