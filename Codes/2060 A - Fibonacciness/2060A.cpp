#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include "Assets/debug.h"
#endif
#define int long long
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define rep(i,a,b)  for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>=b; --i)
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int a,b,d,e;
    cin >> a >> b >> d >> e;
    int c1 = a+b;
    int c2 = d-b;
    int c3 = e-d;
    int ans = 0;
    if(c1==c2 && c2==c3)
        cout<<3<<endl;
    else if(c1==c2 || c2==c3 || c1==c3)
        cout<<2<<endl;
    else
        cout<<1<<endl;
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