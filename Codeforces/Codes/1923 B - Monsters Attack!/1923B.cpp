#include<bits/stdc++.h>
using namespace std;

#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define int                 long long
#define ll                  long long
#define ull                 unsigned long long
#define endl                '\n'
#define ff                  first
#define ss                  second
#define pb                  push_back
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define neg1                cout<<-1<<endl
#define PI                  3.141592653589793238
#define MIN                 INT_MIN
#define MAX                 INT_MAX
#define INF                 LONG_LONG_MAX
#define MOD                 1000000007
#define LLM                 1000000000000000007

ll factorial(ll n)              { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)              { return factorial(n) / factorial(n - r); }
ll nCr(ll n, ll r)              { return factorial(n) / (factorial(r) * factorial(n - r));}
ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)              { return (a * b) / gcd(a, b);}
ull mypow(ull a, ull b)         { ull ans = 1; a%=MOD; while(b){ if (b&1) ans = (ans*a) % MOD; a = (a*a) % MOD; b >>= 1; } return ans; }
bool isPrime(ll n)              { if(n <= 1) return false; for(ll i = 2; i*i <= n; i++) if(n % i == 0) return false; return true; }

#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << #x << " : "; _print(x)
#else
#define dbg(...)
#endif
void __print(long x) {cerr << x;} void __print(long long x){cerr << x;} void __print(bool x){cerr << (x ? "true" : "false");} void _print() { cerr << "\n"; }
void __print(unsigned x){cerr << x;} void __print(unsigned long x){cerr << x;} void __print(unsigned long long x){cerr << x;}
void __print(float x){cerr << x;} void __print(double x){cerr << x;} void __print(long double x){cerr << x;}
void __print(char x){cerr << x;} void __print(const char *x){cerr << x;} void __print(const string &x){cerr << x;}
template <typename A> void __print(const A &x); template <typename A, typename B> void __print(const pair<A, B> &p);
template <typename A> void __print(const A &x) {bool f=1; cerr << '['; for (const auto &i : x) {cerr << (f ? "" : ", "), __print(i); f = 0;} cerr << ']';}
template <typename A, typename B> void __print(const pair<A, B> &p) {cerr << '('; __print(p.first); cerr << ','; __print(p.second); cerr << ')';}
template <typename Head, typename... Tail> void _print(const Head &H, const Tail &...T) { __print(H); if (sizeof...(T)) cerr << ", "; _print(T...);}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n+1,0);
    for(auto &i:a) cin>>i;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        b[abs(x)] += a[i];
    }
    int r=0;
    for(int i=1; i<=n; ++i)
    {
        r += k;
        if(r<b[i])
        {
            no;
            return;
        }
        r -= b[i];
    }
    yes;
}

signed main()
{
    FAST_IO;
    int TC = 1;
    cin >> TC;
    while (TC--) 
        solve();
}