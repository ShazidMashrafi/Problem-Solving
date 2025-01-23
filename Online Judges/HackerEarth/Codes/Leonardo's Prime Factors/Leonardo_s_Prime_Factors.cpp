#include <bits/stdc++.h>
using namespace std;
#define  int  long long
#define  ll  long long
#define ull unsigned long long
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

vector <long long> v;

void primes()
{
    vector <int> is_prime(100 + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    vector <int> prime;
    for(int i = 2; i < 100; i++)
    {
        if(is_prime[i])
        {
            for(int multiple = 2*i; multiple < 100; multiple+= i)
            {
                is_prime[multiple] = false;
            }
            prime.push_back(i);
        }
    }
    
    v.push_back(prime[0]);
    for(int i = 1; v[i - 1] <= 1e18/prime[i]; i++)
    {
        long long new_number = v.back()*prime[i];
        
        v.push_back(new_number);
    }
}

void solve()
{
    primes();
    ull q;
    cin >> q;
    while(q--)
    {
        ull n;
        cin >> n;
        ull i = 0;
        while(v[i] <= n && i != v.size())
            i++;
        cout << i << endl;
    }
}

signed main()
{
    FAST;
    int TCS = 1;
    // cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<'Case '<<TC<<': ';
        solve();
    }
}