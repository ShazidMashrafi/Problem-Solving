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
#define  yn(f)  f? cout<<'YES\n':cout<<'NO\n'
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

vector<vector<int>> pre(9);

void gen(int start, int ct, int k, int curr, const vector<int>&v) 
{
    if(ct == k) 
    {
        pre[k].push_back(curr);
        return;
    }
    for (int i = start; i < sz(v); i++)
        gen(i, ct + 1, k, curr + v[i], v);
}

void precom() 
{
    vector<int> v;
    for (int i = 9; i <= 1e9; i = i * 10 + 9)
        v.push_back(i);
    
    for (int k = 1; k <= 8; k++)
        gen(0, 0, k, 0, v);
}

bool has7(int n)
{
    while(n)
    {
        int r = n % 10;
        n /= 10;
        if(r == 7)    return  true;
    }
    return false;
}

void solve() 
{
    int n;
    cin >> n;
    
    if(has7(n)) 
    {
        cout << 0 << endl;
        return;
    }
    
    for (int k = 1; k <= 8; k++) 
    {
        for (int sum : pre[k]) 
        {
            if (has7(n + sum)) 
            {
                cout << k << endl;
                return;
            }
        }
    }
}

signed main()
{
    FAST;
    precom(); 
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<'Case '<<TC<<': ';
        solve();
    }
}