#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,m;
    string s;
    cin>>n>>m>>s;
    vector<int>v(7,0);
    for(char c:s)
        v[c-'A']++;
    int ans=0;
    for(int i=0; i<7; ++i)
    {
        if(v[i]<m)  ans += (m-v[i]);
    }
    cout<<ans<<endl;
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