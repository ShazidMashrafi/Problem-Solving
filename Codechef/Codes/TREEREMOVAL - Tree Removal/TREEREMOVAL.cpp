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

void dfs(vector<vector<int>>&g, int child, int parent, int root)
{
    for(auto &vertex : g[child])
    {
        if (vertex==parent) continue;
        dfs(g, vertex, child, root);
    }
    if(child != root) cout<<child+1<< ' ';
}

void solve()
{
    int n; 
    cin>>n;

    vector<int>a(n);
    for (auto &i:a) cin>>i;
    
    vector<vector<int>>g(n);
    for (int e=0; e<n-1; ++e)
    {
        int u, v; 
        cin>>u>>v;
        --u, --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int root = -1, mn = *min_element(a.begin(), a.end());
    for (int i = 0; i < n; ++i) 
        if (a[i] == mn) root = i;
    cout << n - 1 << "\n";
    dfs(g, root, -1, root);
    cout << "\n";
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