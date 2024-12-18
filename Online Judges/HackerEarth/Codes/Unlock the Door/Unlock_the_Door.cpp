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
#define MOD                 1000000007
ull pow(ull x, ull n)       {ull ans=1; x%=MOD; while(n) {if(n&1) ans=(ans*x)%MOD; x=(x*x)%MOD; n>>=1;} return ans;}

#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#define dbgin(x) cerr << #x <<" "; _print(x); cerr << ";"<<endl;
#else
#define dbg(x)
#define dbgin(x)
#endif
void _print(int t) {cerr << t;}void _print(string t) {cerr << t;}void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}void _print(double t) {cerr << t;}void _print(unsigned ll t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr<<"[ "; for(T i : v) {_print(i); cerr<<" ";} cerr<<"]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";} 
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const int M = 1e9+7;
const int N = 1e5+10;
ll fact[N];

ll binExp(ll x, ll n, ll m)
{
    ll ans = 1;
    while(n)
    {
        if(n&1)
            ans = (ans * x) % m;
        x = (x * x) % m;
        n >>= 1;
    }
    return ans;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    int ans = (fact[k] * binExp(fact[k-n],M-2,M)) % M;
    cout<<ans<<endl;
}

int32_t main()
{
    FAST_IO;
    fact[0]=1;
    for(ll i=1; i<N; ++i)
        fact[i]=(fact[i-1]*i)%M;
    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}