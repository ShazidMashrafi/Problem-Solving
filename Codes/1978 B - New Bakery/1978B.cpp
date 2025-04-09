#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    if(a>b)
    {
        cout<<n*a<<endl;
        return;
    }
    ll k;
    k=min(b-a,n);
    ll r=b-k;
    ll ans = (b*b+b)/2-(r*r+r)/2;
    if(k<n)
        ans+=a*(n-k);
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