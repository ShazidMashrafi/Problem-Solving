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
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    if(n<3)
    {
        cout<<stoi(s)<<endl;
        return;
    }
    if(s[0]=='0' || s[n-1]=='0')
    {
        cout<<0<<endl;
        return;
    }
    int mn=INT_MAX;
    if(n==3)
    {
        int a,b,x,y;
        x=s[0]-'0';
        y=s[2]-'0';
        a=stoi(s.substr(0,2));
        b=stoi(s.substr(1,2));
        mn = min(mn, x+b);
        mn = min(mn, x*b);
        mn = min(mn, y+a);
        mn = min(mn, y*a);
        cout<<mn<<endl;
        return;
    }
    for(int i=0; i<n-1; ++i)
    {
        if(s[i]=='0')
        {
            cout<<0<<endl;
            return;
        }
        int sum=0,ct=0;
        for(int j=0; j<i; ++j) 
        {
            sum += s[j]-'0';
            if(s[j]=='1')   ct++;
        }
        int num=stoi(s.substr(i,2));
        sum+=num;
        for(int k=i+2; k<n; ++k)    
        {
            sum += s[k]-'0';
            if(s[k]=='1')   ct++;
        }
        mn = min(mn,sum-ct);
    }
    cout<<mn<<endl;
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