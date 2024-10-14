#include<bits/stdc++.h>
using namespace std;
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
   string s;
   cin>>s;
   string str=s.substr(0,2);
   int hour=stoi(str);
   str=s.substr(s.size()-2,2);
    s.pop_back();
    s.pop_back();
   if(hour==12)
   {
        if(str=="AM")
        {
            s[0]='0';
            s[1]='0';
        }
        cout<<s<<endl;
        return;
   }
   if(str=="PM")
   {
        hour+=12;
        string ok=to_string(hour);
        s[0]=ok[0];
        s[1]=ok[1];
   }
   cout<<s<<endl;
}

signed main()
{
    FAST;
    int TC = 1;
    // cin >> TC;
    while (TC--) solve();
}