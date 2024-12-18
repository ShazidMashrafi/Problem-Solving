#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    map<ll,priority_queue<ll>>mp;
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
        mp[a[i]>>2].push(-a[i]);
    }
    for(int i=0; i<n; ++i)
    {
        cout << -mp[a[i] >> 2].top()<<" ";
        mp[a[i]>>2].pop();
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