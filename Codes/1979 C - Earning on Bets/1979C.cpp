#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int l=1;
    for(int i=0; i<n; ++i)
    {
        cin>>v[i];
        l = lcm(l,v[i]);
    }
    int sum=0;
    for(auto x:v)
        sum += l/x;
    if(sum>=l)
    {
        cout<<-1<<endl;
        return;
    }
    for(auto x:v)
        cout<<l/x<<" ";   
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