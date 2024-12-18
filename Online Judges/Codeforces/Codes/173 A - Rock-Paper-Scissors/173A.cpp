#include<bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
    #define dbg(...)
#else
    #include "debug.h"
#endif
#define ll                long long
#define endl              '\n'
#define all(x)            x.begin(), x.end()
#define sz(x)             (int)(x).size()
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define FAST              (ios_base:: sync_with_stdio(false),cin.tie(NULL));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,m,k;
    string s1,s2;
    cin>>n>>s1>>s2;
    m=s1.size(), k=s2.size();
    int l = lcm(m,k);
    string str1 = s1;
    string str2 = s2;
    for(int i=0; i<=l/m; i++) str1+=s1;
    for(int i=0; i<=l/k; i++)  str2+=s2;
    int p=n/l;
    int q=n%l;
    ll ct1=0,ct2=0,ans1=0,ans2=0;
    for(int i=0; i<l && i<n; ++i)
    {
        char a=str1[i];
        char b=str2[i];
        if(a=='R')
        {
            if(b=='P')  ct1++;
            else if(b=='S') ct2++;
        }
        else if(a=='P')
        {
            if(b=='R')  ct2++;
            else if(b=='S') ct1++;
        }
        else if(a=='S')
        {
            if(b=='R') ct1++;
            else if(b=='P')  ct2++;
        }
        if(i==q-1)
        {
            ans1=ct1;
            ans2=ct2;
        }
    }
    cout<<p*ct1+ans1<<" "<<p*ct2+ans2<<endl;
}
signed main()
{
    FAST;
    int TC = 1;
    // cin >> TC;
    while (TC--) solve();
}