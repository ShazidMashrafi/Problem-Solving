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
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &i : v)   cin >> i;

    set<int>st;
    int cur = v[0];
    st.insert(cur);
    for (int i = 1; i < n; i++)
    {
        cur += v[i];
        st.insert(cur);
    }

    for (auto x : st)
    {
        if (cur % x == 0)
        {
            bool flag = true;
            for (int i = 1; i <= cur / x; i++)
            {
                auto it = st.find(x * i);
                if (it == st.end())
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << x << " ";
        }
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