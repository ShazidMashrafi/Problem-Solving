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
    vector<int> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i];
    
    if(n == 1) 
    {
        cout << v[0] << endl;
        return;
    }
    
    int mx = accumulate(all(v), 0LL);
    vector<int> curr = v;
    
    for(int ops = 1; ops <= n; ops++) 
    {
        vector<int> p(sz(curr) - 1);
        for(int i = 0; i < sz(curr) - 1; i++) 
            p[i] = curr[i+1] - curr[i];

        vector<int> q = curr;
        reverse(all(q));
        vector<int> dif(sz(q) - 1);
        for(int i = 0; i < sz(q) - 1; i++)
            dif[i] = q[i+1] - q[i];
        
        mx = max({mx, accumulate(all(p), 0LL), accumulate(all(dif), 0LL)});
        if(p.size() > 1) curr = p;
        else break;
    }
    
    cout << mx << endl;
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