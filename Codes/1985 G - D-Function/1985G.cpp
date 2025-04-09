#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll l,r,k;
    cin>>l>>r>>k;
    if(k>9)
    {
        cout<<0<<endl;
        return;
    }
    ll m=1e9+7;
    ll  ct1=pow(9/k+1,r,m);
    ll ct2=pow(9/k+1,l,m);
    ll ans=(ct1-ct2+m)%m;
    cout<<ans<<endl;
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