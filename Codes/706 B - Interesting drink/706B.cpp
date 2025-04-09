#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    ll n;
    ll N=1e5+10;
    cin>>n;
    vector<ll>shop(N);
    for(ll i=0; i<n; ++i)
    {
        ll x;
        cin>>x;
        shop[x]++;
    }
    vector<ll>presum(N);
    for(ll i=1; i<N; ++i)
    {
        presum[i]=presum[i-1]+shop[i]; 
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        if(x<N)
            cout<<presum[x]<<endl;
        else cout<<presum[N-1]<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    //cin >> TC;
    //cin.ignore();
    while (TC--) solve();
}