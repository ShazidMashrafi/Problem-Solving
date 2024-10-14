#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,m;
    cin>>n;
    vector<int>a(n),b(n);
    for(auto &i:a)  cin>>i;
    for(auto &i:b)  cin>>i;
    cin>>m;
    vector<int>d(m);
    map<int,int>mp;
    for(int i=0; i<m; ++i)
    {
        cin>>d[i];
        mp[d[i]]++;
    }   
    bool f=1;
    for(int i=0; i<n; ++i)
    {
        if(a[i]==b[i]) continue;
        if(mp[b[i]])
            mp[b[i]]--;
        else
            f=0;
    }
    if(count(b.begin(),b.end(), d[m-1])==0) f=0;
    if(f)   cout<<"YES\n";
    else cout<<"NO\n";
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