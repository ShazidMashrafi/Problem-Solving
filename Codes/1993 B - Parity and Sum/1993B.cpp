#include <bits/stdc++.h>
#include<algorithm>
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
    vector<int>v;
    int mx=-1;
    rep(i,0,n)
    {
        int x;
        cin>>x;
        if(x%2==0)  v.pb(x);
        else if(x>mx)    mx=x;
    }
    if(v.empty() || mx==-1)
    {
        cout<<0<<endl;
        return;
    }
    sort(all(v));
    int ans=sz(v);
    for(auto x:v)
    {
        dbg(mx,x,ans);
        if(x<mx) mx+=x;
        else 
        {
            ans+=1;
            break;
        }
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