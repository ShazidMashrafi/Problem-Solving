#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include "Assets/debug.h"
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
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)    cin >>i;
    cin >> m;
    while(m--)
    {
        string s;
        cin >> s;
        if (s.size() != n) 
        {
            yn(0);
            continue;
        }
        map<char, int> char_to_num;
        map<int, char> num_to_char;
        bool f = 1;
        for (int j = 0; j < n; ++j) 
        {
            char c = s[j];
            int num = a[j];
            if (char_to_num.count(c) && char_to_num[c] != num) {
                f = 0;
                break;
            }
            if (num_to_char.count(num) && num_to_char[num] != c) {
                f = 0;
                break;
            }
            char_to_num[c] = num;
            num_to_char[num] = c;
        }
        yn(f);
    }
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