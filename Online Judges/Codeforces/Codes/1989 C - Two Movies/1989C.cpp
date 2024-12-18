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
    cin>>n;
    vector<int>a(n),b(n);
    for(auto &i:a)  cin>>i;
    for(auto &i:b)  cin>>i;
    int p=0, m=0, x=0, y=0;
    rep(i,0,n)
    {
        if(a[i]==1 && b[i]==1)  p++;
        else if(a[i]==-1 && b[i]==-1)   m++;
        else if(a[i]>b[i])  x+=a[i];
        else if(a[i]<=b[i]) y+=b[i];
    }
    while(p--)
    {
        if(x>y) y++;
        else x++;
    }
    while(m--)
    {
        if(x>y) x--;
        else y--;
    }
    cout<<min(x,y)<<endl;
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