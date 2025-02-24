#include <bits/stdc++.h>
using namespace std;
#define  int  long long
#define  ll  long long
#define  endl  '\n'
#define  ff  first
#define  ss  second
#define  ins  insert
#define  pb  push_back
#define  ppb  pop_back
#define  sz(x)  (int)(x).size()
#define  all(x)  x.begin(), x.end()
#define  rep(i,a,b)  for(int i=a; i<b; ++i)
#define  rrep(i,a,b) for(int i=a; i>=b; --i)
#define  yn(f)  f? cout<<"YES\n":cout<<"NO\n"
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int SET = 1;
    while(SET++)
    {
        int n;
        cin >> n;
        if(n==0)
        {
            // cout << 0 << endl;
            break;
        }
        bool f = 1;
        vector<string> v; 
        vector<string> w; 
        for(int i=0; i<n; ++i)
        {
            string s;
            cin >> s;
            // dbg(s);
            if(f)
            {
                v.push_back(s);
                f = 0;
            }
            else
            {
                w.push_back(s);
                f = 1;
            }
        }
        cout << "SET " << SET - 1 << endl;
        for(auto x:v)
            cout << x << endl;
        for(int i = sz(w) - 1; i>=0; --i)
            cout << w[i] << endl;
        
    }
}

signed main()
{
    FAST;
    int TCS = 1;
    // cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}