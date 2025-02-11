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
#define  yn(f)  f? cout<<"Yes\n":cout<<"No\n"
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n;
    cin >> n;
    vector<int>v(n+1);
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    for(int i=1; i<= n; ++i)
    {
        if(v[i]>2)
        {
            int have = v[i] - 2;
            v[i] -= have;
            for(int j = i + 1; j <= n; ++j)
            {
                int ct = v[j];
                if(ct % 2)
                {
                    have--;
                    v[j]++;
                    if(have<1) break;
                }
                else
                {
                    v[j] += have;
                    break;
                }
            }
        }
    }
    for(int i=1; i <= n; ++i)
    {
        if(v[i]%2)
        {
            yn(0);
            return;
        }
    }
    yn(1);
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