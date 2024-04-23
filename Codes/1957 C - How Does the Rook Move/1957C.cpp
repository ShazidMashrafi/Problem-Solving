#include<bits/stdc++.h>
#ifdef ONLINE_JUDGE
    #define dbg(...)
#else
    #include "debug.h"
#endif
using namespace std;
#define ll                long long
#define endl              '\n'
#define all(x)            x.begin(), x.end()
#define sz(x)             (int)(x).size()
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define FAST              (ios_base:: sync_with_stdio(false),cin.tie(NULL));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

const int N=3e5+10, M=1e9+7;
int dp[N];

int func(int n)
{
    if(n==0 || n==1)
        return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n]=(func(n-1)+(2ll*(n-1)*func(n-2))%M)%M;
    return dp[n];
}
void solve()
{
    int n,k;
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    int used=0;
    for(int i=0; i<k; ++i)
    {
        int r,c;
        cin>>r>>c;
        used += 2-(r==c);
    }
    int m=n-used;
    int ans=func(m);
    cout<<ans<<endl;
}

signed main()
{
    FAST;
    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}