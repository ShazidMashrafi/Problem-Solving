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
    int n ,k;
    cin >> n>> k;
    unordered_map<int,int>m;
    rep(i,0,n)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    vector<pair<int,int>>v(all(m));
    sort(all(v));
    int mx=0, sum=0, j=0;
    for(int i=0;i<sz(v);i++)
    {
        if(i>0 && v[i].ff!=v[i-1].ff+1)
        {
            sum=0;
            j=i;
        }
        sum+=v[i].ss;
        if(i==k+j)
        {
            sum -= v[j].ss;
            j++;
        }
        mx=max(mx,sum);
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