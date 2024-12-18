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
    vector<string>v(2);
    for(auto &i:v)  cin>>i;
    dbg(n,v);
    int ans=0;
    rep(i,0,2)
    {
        rep(j,0,n)
        {
            int ct=0;
            if(j+1<n && v[i][j+1]=='.') ct++;
            if(j-1>=0 && v[i][j-1]=='.') ct++;
            dbg(ct);
            if(ct<2)    continue;
            if(i==0)
            {   
                if(v[i+1][j]=='.' && v[i+1][j-1]=='x' && v[i+1][j+1]=='x')  ans++;
            }
            else
            {
                if(v[i-1][j]=='.' && v[i-1][j-1]=='x' && v[i-1][j+1]=='x')  ans++;
            }
        }
    }
    cout<<ans<<endl;
    dbg(ans);
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