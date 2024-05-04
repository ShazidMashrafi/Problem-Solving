#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll>v(n+1,0);
    map<ll, vector<ll>> m;
    m[0].push_back(0);
    for(int i = 1; i <= n; ++i)
    {
        cin>>v[i];
        v[i] ^= v[i-1];
        m[v[i]].push_back(i);
    }
    while(q--)
    {
        ll l, r;
        cin>>l>>r;
        if(v[l-1]==v[r])
        {
            cout<<"YES\n";
            continue;
        }
        auto &v1=m[v[r]], &v2=m[v[l-1]];
        int it1=*lower_bound(v1.begin(), v1.end(), l);
        int it2=*--lower_bound(v2.begin(), v2.end(), r);
        if(it1<it2) cout<<"YES\n";
        else    cout<<"NO\n";
    }
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