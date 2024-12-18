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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &i:v)  cin>>i;
    sort(v.begin(), v.end(), greater<int>());
    int sum = 0;
    for(auto i:v)
    {
        cerr<<i<<" ";
        if(sum+i>k)
        {
            cout<<k-sum<<endl;
            cerr<<endl;
            return;
        }
        sum += i;
    }
    cout<<k-sum<<endl;
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