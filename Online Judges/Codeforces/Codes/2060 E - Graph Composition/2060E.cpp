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

class DSU
{
    private:
    vector<int> par;
    vector<int> sz;
    
    public:
    DSU(int n)
    {
        par = vector<int>(n);
        iota(par.begin(), par.end(), 0);
        sz = vector<int>(n, 1);
    }
    
    int find(int u)
    {
        if(par[u] != par[par[u]])
            par[u] = find(par[par[u]]);        
        return par[u];
    }
    
    bool connected(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u == v) 
            return true;
        return false;
    }
    
    bool join(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u == v) 
            return false;
        if(sz[u] <= sz[v])
        {
            sz[v] += sz[u];
            par[u] = v;
        }
        else
        {
            sz[u] += sz[v];
            par[v] = u;
        }
        return true;
    }
};

void solve()
{
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    DSU uf(n), ug(n);
    vector<pair<int, int>> f, g;
    for(int i=0; i<m1; ++i)
    {
        int u,v;
        cin >> u >> v;
        f.push_back({u-1, v-1});
    }
    for(int i=0; i<m2; ++i)
    {
        int u,v;
        cin >> u >> v;
        g.push_back({u-1, v-1});
    }
    for(auto [u, v] : g)
        ug.join(u, v);
    int ans = 0;

    for(auto [u, v] : f)
    {
        if(ug.connected(u, v))  uf.join(u, v);
        else ans++;
    }
    set<int>s1, s2;
    for(int i=0; i<n; ++i)
    {
        s1.insert(uf.find(i));
        s2.insert(ug.find(i));
    }
    cout << ans + sz(s1) - sz(s2) << endl;
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