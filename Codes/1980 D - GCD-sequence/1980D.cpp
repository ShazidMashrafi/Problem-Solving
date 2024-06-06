#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

bool good(vector<int>v, int del)
{
    v.erase(v.begin()+del);
    int last=gcd(v[0],v[1]);
    for(int i=1; i<v.size()-1; ++i)
    {
        int cur=gcd(v[i],v[i+1]);
        if(cur<last)
        {
            del=i;
            return false;
        }
        last=cur;
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)  cin>>i;
    int del=-1;
    int last=gcd(v[0],v[1]);
    for(int i=1; i<n-1; ++i)
    {
        int cur=gcd(v[i],v[i+1]);
        if(cur<last)
        {
            del=i;
            break;
        }
        last=cur;
    }
    if(del==-1)
    {
        cout<<"YES\n";
        return;
    }
    if(good(v,del-1) || good(v,del) || good(v,del+1)) cout<<"YES\n";
    else    cout<<"NO\n";
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