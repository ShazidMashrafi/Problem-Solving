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
    string s,e;
    cin>>s>>e;
    int h1 = stoi(s.substr(0, 2));
    int m1 = stoi(s.substr(3, 2));
    int h2 = stoi(e.substr(0, 2));
    int m2 = stoi(e.substr(3, 2));
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    int t = (t1+t2)/2;
    int h = t/60;
    int m = t%60;
    dbg(s,e);
    dbg(h1,m1,h2,m2);
    dbg(t1,t2,t);
    dbg(h,m);
    cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << endl;
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