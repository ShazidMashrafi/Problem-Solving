#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
    #include "Debug.h"
#else
    #define dbg(...)
#endif
#define ll                long long
#define ull               unsigned long long
#define endl              '\n'
#define ff                first
#define ss                second
#define pb                push_back
#define all(x)            x.begin(), x.end()
#define sz(x)             (int)(x).size()
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define PI                3.141592653589793238
#define MOD               1000000007
#define FAST              (ios_base:: sync_with_stdio(false),cin.tie(NULL));
ull mypow(ull a,ull b,ull m=MOD) {ull ans=1; a%=m; while(b){if(b&1) ans=(ans*a)%m; a=(a*a)%m; b>>=1;} return ans;}

void solve()
{
    int n,k;
    cin>>n>>k;
    if(n==1)
    {
        cout<<k<<endl;
        return;
    }
    if(k==1)
    {
        for(int i=0; i<n-1; ++i)
            cout<<0<<" ";
        cout<<1<<endl;
        return;
    }
    int x=log2(k);
    x--;
    int r=(2<<x)-1;
    for(int i=0; i<n-2; ++i)
        cout<<0<<" ";
    cout<<r<<" "<<k-r<<endl;
}

signed main()
{
    FAST;
    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}