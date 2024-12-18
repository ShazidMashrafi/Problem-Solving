#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n;
    cin>>n;
    ll grid[n][n];
    ll sum=0,mn=INT_MAX;
    for(ll i=0; i<n; ++i)
    {
        for(ll j=0; j<n; ++j)
        {
            cin>>grid[i][j];
            sum += grid[i][j];
        }
        mn = min(mn, grid[i][n-1-i]);
    }
    cout<<sum-mn<<endl;
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