#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}


void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n, vector<ll>(m));
    for(ll i=0; i<n; ++i)
    {
        for(ll j=0; j<m; ++j)
            cin>>v[i][j];
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            ll mx=0;
            if(i+1<n)  
                mx=max(mx, v[i+1][j]);
            if(i-1>=0)   
                mx=max(mx, v[i-1][j]);
            if(j+1<m) 
                mx=max(mx, v[i][j+1]);
            if(j-1>=0)  
                mx=max(mx, v[i][j-1]);
            if(v[i][j]>mx)  v[i][j] = mx;
            cout<<v[i][j] << " ";
        }
        cout<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}