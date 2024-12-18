#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

const int mod=10000007;

signed main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    while(true)
    {
        int n,k;
        cin>>n>>k;
        if(n+k==0)  break;
        ll ans=(2*pow(n-1,n-1,mod)+2*pow(n-1,k,mod)+pow(n,n,mod)+pow(n,k,mod))%mod;
        cout<<ans<<endl;
    }
}