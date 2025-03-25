#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include <debug.h>
#endif
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
    int n;
    cin >> n;
    vector<string> dates(n);
    for(auto &date : dates) cin >> date;
    
    string prev = "1000";
    
    for(int i = 0; i < n; i++) 
    {
        string best = "9999";
        bool found = false;

        for(int digit = 0; digit < 4; digit++) 
        {
            for(char c = '0'; c <= '9'; c++) 
            {
                if(digit == 0 && c == '0') continue;
                
                string temp = dates[i];
                temp[digit] = c;
                
                if(temp >= "1000" && temp <= "2011" && temp >= prev) 
                {
                    found = true;
                    best = min(temp, best);
                }
            }
        }
        
        if(!found) 
        {
            cout << "No solution" << endl;
            return;
        }
        
        prev = best;
        dates[i] = best;
    }

    for(const string &date : dates)
        cout << date << endl;
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