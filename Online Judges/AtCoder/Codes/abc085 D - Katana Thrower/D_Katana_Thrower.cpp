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
    int n,h;
    cin>>n>>h;
    vector<int>v;
    int mx=0, ct=0;
    rep(i,0,n)
    {
        int a,b;
        cin>>a>>b;
        mx = max(mx,a);
        v.pb(b);
    }
    sort(all(v), greater<int>());
    dbg(v);
    for(int i=0; i<n; ++i)
    {
        if(v[i]<mx || h<=0) break;
        h -= v[i];
        ct++;
        dbg(h,v[i]);
    }
    int rem=0;
    if(h>0) rem=(h+mx-1)/mx;
    cout<<ct+rem<<endl;
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