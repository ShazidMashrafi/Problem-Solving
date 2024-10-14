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
    int n,q;
    cin>>n>>q;
    string a,b;
    cin>>a>>b;
    vector<int>cnt(26,0);
    vector<vector<int>>v;
    v.pb(cnt);
    for(int i=0; i<n; ++i)
    {
        cnt[a[i]-'a']++;
        cnt[b[i]-'a']--;
        v.pb(cnt);
    }
    dbg(v);
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int op=0;
        dbg(v[l-1],v[r]);
        for(int i=0; i<26; ++i)
        {
            op += abs(v[l-1][i]-v[r][i]);
        }
        cout<<op/2<<endl;
    }
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