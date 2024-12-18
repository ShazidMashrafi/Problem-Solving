#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

signed main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int cs=1;
    while(true)
    {
        ll r,n;
        cin>>r>>n;
        if(r==0 && n==0)    break;
        ll ans=(r+n-1)/n;
        cout<<"Case "<<cs++<<": ";
        if(ans>27)  cout<<"impossible"<<endl;
        else    cout<<ans-1<<endl;
    }
}