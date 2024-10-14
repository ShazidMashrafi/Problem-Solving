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

const int limit = 200;
vector<int> non_primes;
vector<bool> is_prime(limit + 1, true);

void seive() 
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= limit; ++i) 
    {
        if (is_prime[i]) 
        {
            for (int j = i * i; j <= limit; j += i) is_prime[j] = false;
        }
    }
    for (int i = 2; i <= limit; ++i) 
    {
        if (is_prime[i]==0) non_primes.pb(i);
    }
}

void solve()
{
    int n;
    cin>>n;
    map<int,int>m;
    int a=0,b=0;
    dbg(non_primes);
    rep(i,1,n+1)
    {
        int x;
        cin>>x;
        dbg(i,x);
        dbg(m);
        dbg(a,b);
        for(auto [y,z]:m)
        {
            if(x==y)
            {
                a=z;
                b=i;
            }
        }
        for(auto p:non_primes)
        {
            if(p>x) m[p-x]=i;
        }
    }
    if(a && b)  cout<<a<<" "<<b<<endl;
    else cout<<-1<<endl;
}

signed main()
{
    FAST;
    int TCS = 1;
    cin >> TCS;
    seive();
    for (int TC = 1; TC <= TCS; ++TC)
    {
      // cout<<"Case "<<TC<<": ";
      solve();
    }
}