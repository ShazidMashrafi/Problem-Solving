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
    vector<int>adj[n], v(n);
    for(auto &i:v)  cin>>i;
    rep(i,1,n)
    {
        int p;
        cin>>p;
        p--;
        adj[p].pb(i);
    }
    function<int (int node)> dfs = [&](int node)->int 
    {
        int mn = INT_MAX;
        for(auto child:adj[node]) 
            mn = min(mn, dfs(child));
        dbg(mn);
        if(node == 0) return mn+v[0];
        if(mn == INT_MAX)   return v[node];
        if(v[node] >= mn)   return mn;
        return (mn+v[node])/2;
    };
    cout<<dfs(0)<<endl;
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