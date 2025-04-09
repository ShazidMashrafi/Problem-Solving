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

const int M = 1e2 + 10;
vector<int>g[M];
int depth[M];

void dfs(int vertex, int parent)
{
    for(auto child : g[vertex])
    {
        if(child == parent) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
    }
}
void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    while(n--)
    {
        int m;
        cin >> m;
        memset(g, 0, sizeof(g));
        for(int i = 0; i < m -1 ; ++i)
        {
            int v, u;
            cin >> v >> u;
            g[v].push_back(u);
            g[u].push_back(v);
        }
        int mx = 0;
        for(int i=0; i<=m; ++i)
        {
            memset(depth, 0, sizeof(depth));
            dfs(i, 0);
            for(auto d : depth)
                mx = max(d, mx);
        }
        ans += mx;
    }
    cout << ans << endl;
}

signed main()
{
    FAST;
    int TCS = 1;
    // cin >> TCS;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}