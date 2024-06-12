#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll h,n;
    cin>>h>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(auto &i:a)
    {
        cin>>i;
        h -=i;
    }
    for(auto &i:b)  cin>>i;
    if(h<=0)
    {
        cout<<1<<endl;
        return;
    }
    ll l=0, r=h*2e5, ans;
    while(l<=r)
    {
        ll mid = l + (r-l)/2;
        ll s=0;
        for(int i=0; i<n; ++i)
            s += (mid/b[i])*a[i];
        if(h-s<=0)
        {
            ans=mid;
            r=mid-1;
        }
        else
            l = mid+1;
    }
    cout<<ans+1<<endl;
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