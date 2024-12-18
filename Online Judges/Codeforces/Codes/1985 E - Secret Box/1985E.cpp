#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

vector<ll> nums(ll n) 
{
    vector<ll> v;
    for (ll i = 2; i * i <= n; ++i) 
    {
        while (n % i == 0) 
        {
            v.push_back(i);
            n /= i;
        }
    }
    if (n != 1) 
        v.push_back(n);
    return v;
}

void solve()
{
    ll x, y, z, k;
    cin >> x >> y >> z >> k;
    ll mx=0;
    for(ll a=1; a<=x; ++a)
    {
        for(ll b=1; b<=y; ++b)
        {
            if(k%(a*b)) continue;
            ll c=k/(a*b);
            if(c<=z && a*b*c==k)
            {
                ll ct=(x-a+1)*(y-b+1)*(z-c+1);
                mx=max(ct,mx);
            }
        }
    }
    cout<<mx<<endl;
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