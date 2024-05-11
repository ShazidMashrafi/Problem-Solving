#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    string s;
    cin>>s;
    bool ok=0;
    for(int i=1; i<s.size(); ++i)
    {
        if(s[i]!=s[0])
        {
            swap(s[i],s[0]);
            ok=1;
            break;
        }
    }
    if(ok) cout<<"YES\n"<<s<<endl;
    else cout<<"NO\n";
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