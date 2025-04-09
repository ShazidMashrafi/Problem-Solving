#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include "Assets/debug.h"
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
    string s;
    cin>>n>>s;
    int r=sqrt(n);
    if(r*r!=n)
    {
        yn(0);
        return;
    }
    vector<string>v;
    int c=1;
    for(int i=0; i<n; i+=r)
    {
        string t="";
        dbg(i);
        for(int j=i; j<c*r; ++j) 
        {
            dbg(s[j]);
            t+=s[j];
        }
        dbg(t);
        v.pb(t);
        c++;
    }
    dbg(v);
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<r; ++j)
        {
            dbg(s[j]);
            if(j==0 || j==r-1 || i==0 || i==r-1)
            {
                if(v[i][j]!='1')    
                {
                    yn(0);
                    return;
                }
            } 
            else
            {
                if(v[i][j]!='0')
                {
                    yn(0);
                    return;
                }
            } 
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