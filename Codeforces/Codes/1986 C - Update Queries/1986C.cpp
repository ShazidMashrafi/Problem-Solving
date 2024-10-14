#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,m;
    cin>>n>>m;
    string s,c;
    cin>>s;
    set<int>st;
    for(int i=0; i<m; ++i)
    {
        int x;
        cin>>x;
        st.insert(x-1);
    }
    cin>>c;
    sort(c.begin(),c.end());
    int i=0;
    for(auto x:st)
        s[x]=c[i++];
    cout<<s<<endl;
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