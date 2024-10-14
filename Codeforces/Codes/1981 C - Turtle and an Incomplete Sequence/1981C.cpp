#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)  cin>>i;
    int prev=-1;
    for(int i=0; i<n; ++i)
    {
        if(v[i]==-1)    continue;
        if(prev==-1)
        {
            for(int j=i-1; j>=0; --j)
            {
                if(v[j+1]>1)    v[j]=v[j+1]/2;
                else v[j]=v[j+1]*2;
            }
            prev=i;
            continue;
        }
        int l=prev, r=i;
        while(r-l>1)
        {
            if(v[r]>v[l])
            {
                v[r-1]=v[r]/2;
                r--;
            }
            else
            {
                if(v[l]>1)  v[l+1]=v[l]/2;
                else    v[l+1]=v[l]*2;
                l++;
            }
        }
        prev=i;
    }
    if(prev<n-1)
    {
        if(prev==-1)
        {
            v[0]=1;
            prev=0;
        }
        for(int i=prev+1; i<n; ++i)
        {
            if(v[i-1]>1) v[i]=v[i-1]/2;
            else    v[i]=v[i-1]*2;
        }
    }
    for(int i=0; i<n-1; ++i)
    {
        if(v[i]!=v[i+1]/2 && v[i+1]!=v[i]/2)
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(auto i:v)   cout<<i<<" ";
    cout<<endl;
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