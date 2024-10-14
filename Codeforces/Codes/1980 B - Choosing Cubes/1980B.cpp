#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,f,k;
    cin>>n>>f>>k;
    vector<int>v(n);
    for(auto &i:v)  cin>>i;
    int fav=v[f-1];
    sort(v.begin(),v.end(),greater<int>());
    if(k==n || v[k]<fav)
        cout<<"YES\n";
    else if(v[k]==fav && v[k-1]==fav)
        cout<<"MAYBE\n";
    else
        cout<<"NO\n";
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