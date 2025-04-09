#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include "Assets/debug.h"
#endif
#define int long long
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define rep(i,a,b)  for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>=b; --i)
#define pb push_back
#define ppb pop_back
#define ins insert
#define ff first
#define ss  second
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n,k;
    cin>>n>>k;
    map<int,vector<int>>m;
    rep(i,0,n)
    {
        int x;
        cin>>x;
        m[x%k].pb(x/k);
    }
    int odd=n&1, ans=0;
    for(auto it:m)
    {
        vector<int>&v=it.second;
        int len = sz(v);
        sort(all(v));
        if(len&1)
        {
            if(!odd)
            {
                cout<<-1<<endl;
                return;
            }
            odd--;
            if(len==1)  continue;
            vector<int>pf(len,0),sf(len,0);
            pf[1]=v[1]-v[0];
            sf[len-2]=v[len-1]-v[len-2];
            for(int i=3; i<len; i+=2)   pf[i]=pf[i-2]+v[i]-v[i-1];
            for(int i=len-4; i>=0; i-=2)    sf[i]=sf[i+2]+v[i+1]-v[i];
            int mn=INT_MAX;
            for(int i=0; i<len; i+=2)
            {
                int sum=0;
                if(i>0) sum+=pf[i-1];
                if(i<len-1)  sum+=sf[i+1];
                mn = min(mn,sum);
            }
            ans+=mn;
        }
        else
        {
            for(int i=1; i<len; i+=2)   ans+=v[i]-v[i-1];
        }
    }
    cout<<ans<<endl;   
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