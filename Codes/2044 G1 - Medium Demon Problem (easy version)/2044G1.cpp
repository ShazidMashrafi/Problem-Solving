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
    int n;
    cin >> n;
    vector<int> r(n + 1);
    vector<int> deg(n + 1, 0);
    for (int i = 1; i <= n; ++i) 
    {
        cin >> r[i];
        deg[r[i]]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; ++i) 
    {
        if (deg[i] == 0) q.push(i);
    }
    dbg(r);
    dbg(deg);
    dbg(q);

    int ct = 0;
    while (!q.empty()) 
    {
        ct++;
        int size = q.size();
        for (int i = 0; i < size; ++i) 
        {
            int u = q.front();
            dbg(u);
            q.pop();
            int v = r[u];
            dbg(v);
            deg[v]--;
            if (deg[v] == 0) q.push(v);
        }
    }

    cout << ct + 2 << '\n';
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