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
#define pb push_back
#define ppb pop_back
#define in insert
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    if(n==2)
    {
        cout<<stoi(s)<<endl;
        return;
    }
    int mn = INT_MAX;
    rep(i,0,n-1)
    {
        vector<int>v;
        int sum=0;
        rep(j,0,i)  v.pb(s[j]-'0');
        v.pb(stoi(s.substr(i,2)));
        rep(j,i+2,n)  v.pb(s[j]-'0');
        sort(all(v));
        if(v[0]==0)     mn=0;
        for(auto x:v)
        {
            if(x!=1)    sum+=x;
        }
        if(sum==0)  sum=1;
        mn = min(mn, sum);
    }
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