#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n,m;
    cin>>n>>m;
    ll l=max(0LL,n-m), r= n+m, ans=0;
    for(int i=0; i<32; ++i)
    {
        ll p=l/(1<<i);
        ll q=r/(1<<i);
        if(p&1 || q&1 || p!=q)
            ans |= (1<<i);
    }
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