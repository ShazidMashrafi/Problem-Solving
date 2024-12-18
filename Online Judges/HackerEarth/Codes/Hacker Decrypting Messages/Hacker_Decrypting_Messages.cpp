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

const int N = 2e6+10;
int hsh[N];
int can_remove[N];
int hp[N];

vector<int>distinctPF(int x)
{
    vector<int>ans;
    while(x>1)
    {
        int pf = hp[x];
        while(x % pf==0)
            x /= pf;
        ans.pb(pf); 
    }
    return ans;
}

void solve()
{
    for(int i=2; i<N; ++i)
    {
        if(hp[i]==0)
        {
            for(int j=i; j<N; j+=i)
                hp[j]=i;
        }
    }
    int n,q;
    cin>>n>>q;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        hsh[x]=1;
    }
    for(int i=2; i<N; ++i)
    {
        if(hsh[i])
        {
            for(int j=i; j<N; j*=i)
                can_remove[j]=1;
        }
    }
    while(q--)
    {
        int x;
        cin>>x;
        vector<int>pf = distinctPF(x);
        bool possible = false;
        for(int i=0; i<sz(pf); ++i)
        {
            for(int j=i; j<sz(pf); ++j)
            {
                int prod = pf[i]*pf[j];
                if(i==j && x % prod != 0)
                    continue;
                int to_remove = x/prod;
                if(can_remove[to_remove] || to_remove==1)
                {
                    possible = true;
                    break;                    
                }
            }
            if(possible)
                break;
        }
        if(possible)
            yes;
        else
            no;
    }
}

int32_t main()
{
    FAST_IO;
    int TC = 1;
    //cin >> TC;
    while (TC--) 
        solve();
}