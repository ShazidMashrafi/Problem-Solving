#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn = INT_MAX;
    for(int i=1; i<=10; ++i)
    {
        int diff = abs(a-i)+abs(b-i)+abs(c-i);
        mn = min(diff, mn);
    }
    cout<<mn<<endl;
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