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
    int n, k;
    cin >> n >> k;
    map<int,int>cnt;
    rep(i,0,n)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int ans = 0;
    for(auto x:cnt)
    {
        ans += min(cnt[k-x.first], x.second);
    }
    cout << ans/2 << endl;
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