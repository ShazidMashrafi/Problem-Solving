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
    int q;
    cin >> q;
    int mn = - 2e9;
    int mx = 2e9;
    while(q--)
    {
        string s;
        int n;
        char c;
        cin >> s >> n >> c;
        if(s == ">=")
        {
            if(c == 'Y')
            {
                mn = max(mn, n);
            }
            else
            {
                mx = min(mx, n - 1);
            }
        }
        else if(s == "<=")
        {
            if(c == 'Y')
            {
                mx = min(mx, n);
            }
            else
            {
                mn = max(mn, n + 1);
            }
        }
        else if(s==">")
        {
            if(c == 'Y')
            {
                mn = max(mn, n + 1);
            }
            else
            {
                mx = min(mx, n);
            }
        }
        else if(s == "<")
        {
            if(c == 'Y')
            {
                mx = min(mx, n - 1);
            }
            else
            {
                mn = max(mn, n);
            }
        }
    }
    if(mn>mx)
    {
        cout << "Impossible" << endl;
    }
    else
        cout << mn << endl;
}

signed main()
{
    FAST;
    int TCS = 1;
    // cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}