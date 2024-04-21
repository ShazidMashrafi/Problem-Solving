#include<bits/stdc++.h>
using namespace std;
#define ll                long long
#define ull               unsigned long long
#define endl              '\n'
#define ff                first
#define ss                second
#define pb                push_back
#define all(x)            x.begin(), x.end()
#define sz(x)             (int)(x).size()
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define PI                3.141592653589793238
#define MOD               1000000007
#define FAST              (ios_base:: sync_with_stdio(false),cin.tie(NULL));
ull mypow(ull a,ull b,ull m=MOD) {ull ans=1; a%=m; while(b){if(b&1) ans=(ans*a)%m; a=(a*a)%m; b>>=1;} return ans;}
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << #x << " : "; _print(x)
#else
#define dbg(...)
#endif
void __print(int x) {cerr << x;}void __print(long x) {cerr << x;} void __print(long long x){cerr << x;}
void __print(unsigned x){cerr << x;} void __print(unsigned long x){cerr << x;} void __print(unsigned long long x){cerr << x;}
void __print(float x){cerr << x;} void __print(double x){cerr << x;} void __print(long double x){cerr << x;}
void __print(char x){cerr << x;} void __print(const char *x){cerr << x;} void __print(const string &x){cerr << x;}
void __print(bool x){cerr << (x ? "true" : "false");} void _print() { cerr << "\n"; }
template <typename A> void __print(const A &x); template <typename A, typename B> void __print(const pair<A, B> &p);
template <typename A> void __print(const A &x) {bool f=1; cerr << '['; for (const auto &i : x) {cerr << (f ? "" : ","), __print(i); f = 0;} cerr << ']';}
template <typename A, typename B> void __print(const pair<A, B> &p) {cerr << '('; __print(p.first); cerr << ','; __print(p.second); cerr << ')';}
template <typename Head, typename... Tail> void _print(const Head &H, const Tail &...T) { __print(H); if (sizeof...(T)) cerr << ", "; _print(T...);}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve()
{
    
}

signed main()
{
    FAST;
    int TC = 1;
    //cin >> TC;
    while (TC--) solve();
}