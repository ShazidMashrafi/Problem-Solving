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
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll power(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n;
    string s, t;
    cin >> n >> s >> t;
    vector<int> v;
    for(int i = 0; i < n; ++i)
    {
        if(s[i] == t[i])    continue;
        int p = -1;
        for(int j = i + 1; j < n; ++j)
        {
            if(s[j] == t[i])
            {
                p = j;
                break;
            }
        }
        if(p == -1)
        {
            cout << -1 << endl;
            return;
        }
        for(int j = p - 1; j >= i; --j)
        {
            swap(s[j], s[j + 1]);
            v.pb(j);
        }
    }
    cout << sz(v) << endl;
    for (auto &&x : v)
    {
        cout << x + 1 << " ";
    }
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