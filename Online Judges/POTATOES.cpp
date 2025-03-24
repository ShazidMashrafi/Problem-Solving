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

const int MAXN = 1e6 + 10;
vector<bool> is_prime(MAXN, true);
void sieve() 
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAXN; ++i) 
    {
        if (is_prime[i]) 
        {
            for (int j = i * i; j <= MAXN; j += i) 
                is_prime[j] = false;
        }
    }
}

void solve()
{
    int a, b;
    cin >> a >> b;
    int i = a + b;
    while(i++)
    {
        if(is_prime[i])
        {
            cout << i - a - b << endl;
            break;
        }
    }
}

signed main()
{
    FAST;
    sieve();
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}