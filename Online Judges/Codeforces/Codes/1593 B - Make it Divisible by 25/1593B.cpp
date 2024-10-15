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

int count(string s, string t)
{
    int ct=0;
    while(s.length() && t.length())
    {
        if(s.back() == t.back()) t.pop_back();
        else    ct++;
        s.pop_back();
    }
    if(t.length()) return INT_MAX;
    return ct;
}

void solve()
{
    string s;
    cin>>s;
    string v[] = {"00", "25", "50", "75"};
    ll mn = INT_MAX;
    for(int i=0; i<4; ++i)
        mn = min(mn, count(s,v[i]));
    cout<<mn<<endl;
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