#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define sz(x) (int)(x).size()
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n-1),ans;
    for(auto &i:v)  cin>>i;
    ans.push_back(v.back());
    ans.push_back(1e9);
    for(ll i=n-3; i>=0; --i)    ans.push_back(ans.back()-v[i]);
    reverse(ans.begin(),ans.end());
    for(auto x:ans)   cout<<x<<" ";
    cout<<endl;
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