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
    ll ans=1;
    for(ll i=2; i*i<=n; ++i)
    {
        if(n%i==0)
        {
            cerr<<i<<endl;
            ans=n/i;
            break;
        }
    }
    cout<<ans<<" "<<n-ans<<endl;
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