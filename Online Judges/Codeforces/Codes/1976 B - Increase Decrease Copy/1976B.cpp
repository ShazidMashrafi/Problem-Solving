#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n),b(n+1);
    for(auto &i: a) cin>>i;
    for(auto &i: b) cin>>i;
    ll ans=0, diff=1e18;
    for(ll i=0; i<n; ++i)
    {
        ans += abs(a[i]-b[i]);
        diff = min(diff, abs(b[n]-a[i]));
        diff = min(diff, abs(b[n]-b[i]));
        if(b[n]>=min(a[i],b[i]) && b[n]<=max(a[i],b[i]))
            diff = 0;
    }
    cout<<ans+1+diff<<endl;
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