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
#define yn(f) f? cout<<"YES\n":cout<<"NO\n"
#define rep(i,a,b)  for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>=b; --i)
#define pb push_back
#define ppb pop_back
#define ins insert
#define ff first
#define ss  second
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>a(n, vector<int>(m)),pf(n+1,vector<int>(m+1,0));
    for(auto &x:a)
    {
        for(auto &i:x)  cin>>i;
    }
    vector<string>b(n);
    for(auto &i:b)   cin>>i;
    int diff=0;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(b[i][j]=='1')   diff += a[i][j];
            else diff -= a[i][j]; 
        }
    }
    diff=abs(diff);
    rep(i,1,n+1)
    {
        rep(j,1,m+1)
        {
            int val=-1;
            if(b[i-1][j-1]=='1')    val=1;
            pf[i][j] = val+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int g=0;
    for(int i=1; i<=n-k+1; ++i)
    {
        for(int j=1; j<=m-k+1; ++j)
        {
            int val=pf[i+k-1][j+k-1] - pf[i-1][j+k-1] - pf[i+k-1][j-1]+pf[i-1][j-1];
            g = gcd(g,abs(val));
        }
    }
    if(diff==0) yn(1);
    else if(g==0)   yn(0);
    else yn(diff%g==0);
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