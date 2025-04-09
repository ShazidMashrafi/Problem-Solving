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

void fn(vector<int>&v, string &s, vector<int>&ans, vector<int>&vis, int &ct, int i)
{
    dbg(i);
    if(vis[i])  return;
    if(s[i]=='0') ct++;
    vis[i]=1;
    fn(v,s,ans,vis,ct,v[i]-1);
    ans[i]=ct;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    string s;
    cin>>s;
    vector<int>ans(n,0),vis(n,0);
    for(int i=0; i<n; ++i)
    {
        int ct=0;
        fn(v,s,ans,vis,ct,i);
    }
        // fn(v,s,ans,vis,ct,0);
    for(auto x:ans)   cout<<x<<" ";
    cout<<endl;
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