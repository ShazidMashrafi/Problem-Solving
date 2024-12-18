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

int vis[8][8];
int level[8][8];


pair<int,int>getXY(string s)
{
    pair<int,int>ans;
    ans.first=s[0]-'a';
    ans.second=s[1]-'1';
    return ans;
}

vector<pair<int,int>>moves = { {-1,2}, {1,2}, {-1,-2}, {1,-2},
                               {2,-1}, {2,1}, {-2,-1}, {-2,1} };

bool valid(int x,int y)
{
    return x>=0 && y>=0 && x<8 && y<8;
}

int bfs(string source, string dest)
{
    auto start = getXY(source);
    auto end = getXY(dest);
    queue<pair<int,int>>q;
    q.push(start);
    vis[start.first][start.second] = 1;
    level[start.first][start.second] = 0;

    while(!q.empty())
    {
        if(level[end.first][end.second] != MAX)
            return level[end.first][end.second];
        auto v = q.front();
        int x=v.first, y=v.second;
        q.pop();
        for(auto move : moves)
        {
            int px = move.first + x;
            int py = move.second + y;
            if(valid(px,py) && !vis[px][py])
            {
                q.push({px,py});
                level[px][py] = level[x][y]+1;
                vis[px][py] = 1;
            }
        }
    }
}

void reset()
{
    for(int i=0; i<8; ++i)
    {
        for(int j=0; j<8; ++j)
        {
            level[i][j]=MAX;
            vis[i][j]=0;
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    while(n--)
    {
        reset();
        string s1,s2;
        cin>>s1>>s2;
        cout<<bfs(s1,s2)<<endl;
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