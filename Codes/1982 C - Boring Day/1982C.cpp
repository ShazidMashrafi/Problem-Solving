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
#define ins insert
#define ff first
#define ss  second
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>v(n);
    for(auto &i:v)  cin>>i;
    int sum=0, ans=0, i=0;
    for(int j=0; j<n; ++j)
    {
        sum += v[j];
        while(i<=j && sum>r)
        {
            sum -= v[i];
            i++;
        }
        if(sum>=l && sum<=r)
        {
            ans++;
            sum=0;
            i = j+1;
        }
    }
    cout<<ans<<endl;
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