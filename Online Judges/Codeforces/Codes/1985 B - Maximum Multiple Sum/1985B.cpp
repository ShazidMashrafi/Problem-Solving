#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n;
    cin>>n;
    int mx=0,x=-1;
    for(int i=2; i<=n; ++i)
    {
        int sum=0;
        for(int j=1; j*i<=n; ++j)
        {
            sum+=j*i;
        }
        if(sum>mx)
        {
            mx=sum;
            x=i;
        }
    }
    cout<<x<<endl;
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