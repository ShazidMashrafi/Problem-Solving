#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n;
    string s;
    cin>>n>>s;
    if(n%3==2)
    {
        cout<<"NO\n";
        return;
    }
    for(int i=2; i<s.size(); i+=3)
    {
        if(s[i]!=s[i-1])
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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