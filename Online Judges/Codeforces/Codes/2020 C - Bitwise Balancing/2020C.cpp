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

void solve() {
    int b, c, d;  
    cin >> b >> c >> d;
    int a = 0;  

    for (int i = 0; i < 61; ++i) 
    {
        int bi = (b >> i) & 1;  
        int ci = (c >> i) & 1;  
        int di = (d >> i) & 1;
        if(di==1)
        {
            if(bi==0 && ci==1)
            {
                cout<<-1<<endl;
                return;
            }
            if(bi==0 && ci==0)  a |= (1ll<<i);
            else if(bi==1 && ci==0) a |= (1ll<<i);
        }
        else
        {
            if(bi==1 && ci==0)   
            {
                cout<<-1<<endl;
                return;
            }
            if(bi==1 && ci==1)    a |= (1ll<<i);
            else if(bi==0 && ci==1) a |= (1ll<<i);
        }  
    }
    cout<<a<<endl;
       
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