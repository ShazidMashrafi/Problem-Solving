#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define endl '\n'
#define size(x) (int)(x).size()
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll mpow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0; i<n;++i)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    int ct1 = 0, ct2 = 0;
    for(auto [x,y]:m)
    {
        if(y==1)
            ct1 ++;
        else if(y>1)
            ct2++;
    }
    cout << ct2 + 2*((ct1+1)/2)<<endl;
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