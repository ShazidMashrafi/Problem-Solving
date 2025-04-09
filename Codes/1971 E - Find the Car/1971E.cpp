#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>a(k+1),b(k+1);
    a[0]=b[0]=0;
    for(int i=1; i<=k; ++i) cin>>a[i];
    for(int i=1; i<=k; ++i) cin>>b[i];
    while(q--)
    {
        ll d;
        cin>>d;
        ll ind=lower_bound(a.begin(),a.end(),d) - a.begin();
        if(a[ind]==d)  cout<<b[ind]<<" ";
        else
        {
            ll dist=a[ind]-a[ind-1];
            ll time=b[ind]-b[ind-1];
            ll x=d-a[ind-1];
            cout<<((x*time)/dist)+b[ind-1]<<" ";
        }
    }
    cout<<endl;
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