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
#define  pb  push_back
#define  sz(x)  (int)(x).size()
#define  all(x)  x.begin(), x.end()
#define  yn(f)  f? cout<<"YES\n":cout<<"NO\n"
#define  Dpos(n) fixed << setprecision(n)
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll power(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n;
    cin >> n;
    vector<int> f(n + 1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i];
        if(f[i]) mp[f[i]]++;
    }
    vector<int> cycle, in, out;
    for(int i = 1; i <= n; ++i)
    {
        if(f[i] == 0 && mp[i] == 0) cycle.pb(i);
        else if(f[i] == 0)  out.pb(i);
        else if(mp[i] == 0) in.pb(i);
    }

    if(sz(cycle) == 1)
    {
        f[out[0]] = cycle[0];
        f[cycle[0]] = in[0];
        out.erase(out.begin());
        in.erase(in.begin());  
    }
    else if(sz(cycle) > 1)
    {
        for (int i = 0; i < sz(cycle) - 1; i++)
            f[cycle[i]] = cycle[i + 1];
        f[cycle[sz(cycle) - 1]] = cycle[0];
    }

    for(int i = 0; i < sz(in); ++i)
        f[out[i]] = in[i];
    
    for(int i = 1; i <= n; ++i)  
        cout << f[i] << " ";
    cout << endl;
}

signed main()
{
    FAST;
    // freopen("input.txt", "r", stdin);    
    // freopen("output.txt", "w", stdout);  

    int TCS = 1;
    // cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}