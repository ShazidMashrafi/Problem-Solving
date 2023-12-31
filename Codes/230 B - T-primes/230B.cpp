#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll N = 1e6;
    vector<bool>prime(N+1,1);
    prime[0]=prime[1]=0;
    for (ll i = 2; i * i <= N; ++i)
    {
        if (prime[i])
        {
            for (ll j = i*i; j <=N; j+=i)
                prime[j]=0;
        }
    }
    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        ll r= sqrt(x);
        if(r*r!=x) cout<<"NO"<<endl;
        else if(prime[sqrt(x)]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    // cin >> TC;
    // cin.ignore();
    while (TC--)
        solve();
}