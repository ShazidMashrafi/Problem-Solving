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
    int n,m;
    cin>>n>>m;
    vector<string> v1(n, string(m, 'W')), v2(n, string(m,'R'));
    bool f1=1, f2=1;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if((i+j)&1) 
            {
                v1[i][j]='R';
                v2[i][j]='W';
            }
            char c;
            cin>>c;
            dbg(c);
            if(c!='.')
            {
                if(c!=v1[i][j]) f1=0;
                if(c!=v2[i][j]) f2=0;
            }
        }
    }
    dbg(f1,f2);
    if(f1 || f2)
    {
        yn(1);
        if(f1)
        {
            for(auto &s:v1)
            {
                for(auto &c:s)  cout<<c;
                cout<<endl;
            }  
        }
        else
        {
            for(auto &s:v2)
            {
                for(auto &c:s)  cout<<c;
                cout<<endl;
            } 
        }
    }
    else yn(0);
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