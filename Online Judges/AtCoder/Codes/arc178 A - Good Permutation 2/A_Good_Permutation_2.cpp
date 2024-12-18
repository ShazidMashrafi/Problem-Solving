#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>freq(n+1,0);
    for(int i=0; i<m; ++i)
    {
        int x;
        cin>>x;
        freq[x-1]++;
    }
    if(freq[0] || freq[n-1])
    {
        cout<<-1<<endl;
        return;
    }
    vector<int>ans(n);
    iota(ans.begin(),ans.end(),1);
    for(int i=0; i<n-1; ++i)
    {
        if(freq[i])
            swap(ans[i],ans[i+1]);
    }
    for(auto x:ans)   cout<<x<<" ";
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int TCS = 1;
    // cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}