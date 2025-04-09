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
ll power(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

const double eps = 1e-8;

void solve()
{
    int n, b, s;
    cin >> n >> b >> s;
    vector<int>v(n);
    rep(i, 0, n)    cin >> v[i];
    int fs, fy;
    cin >> fs >> fy;
    
    double mn = DBL_MAX;
    int ans = -1;
    for(int i = 1; i < n; ++i)
    { 
        double t1 = (double)v[i] / b;
        double d = sqrt(pow(fs - v[i], 2) + pow(fy, 2));
        double t2 = d / s;

        double t = t1 + t2;
        if (t < mn - eps)
        {
            ans = i + 1;
            mn = t;
        }
        else if(abs(t - mn) < eps)
        {
            double pre = sqrt(pow(fs - v[ans - 1], 2) + pow(fy, 2));
            if(d < pre)
            {
                ans = i + 1;
                mn = t;
            }
        }
    }
    cout << ans << endl;
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
        // cout<<'Case '<<TC<<': ';
        solve();
    }
}