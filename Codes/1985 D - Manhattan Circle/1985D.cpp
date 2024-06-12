#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string>v;
    for(int i=0; i<n; ++i)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    int x=0,y=0, mx=0, my=0;
    for(int i=0; i<n; ++i)
    {
        int ct=0;
        for(int j=0; j<m; ++j)
        {
            if(v[i][j]=='#')
                ct++;
        }
        if(ct>mx)
        {
            mx=ct;
            x=i+1;
        }
    }
    for(int j=0; j<m; ++j)
    {
        int ct=0;
        for(int i=0; i<n; ++i)
        {
            if(v[i][j]=='#')
                ct++;
        }
        if(ct>my)
        {
            my=ct;
            y=j+1;
        }
    }
    cout<<x<<" "<<y<<endl;
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