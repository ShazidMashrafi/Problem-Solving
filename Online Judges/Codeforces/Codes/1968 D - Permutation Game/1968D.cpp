#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void find(vector<ll>&p, vector<ll>&a, vector<ll>&path, ll pos)
{
    vector<bool>vis(p.size());
    while(!vis[pos - 1])
    {
        vis[pos - 1] = 1;
        path.push_back(a[pos - 1]);
        pos = p[pos - 1];
    }
}

ll score(vector<ll>&path, ll k)
{
    ll sum = 0,mx = 0,cur;
    for(ll i = 0; i < path.size(); ++i)
    {
        if( k < i + 1)  break;
        cur = sum + path[i] * (k-i);
        mx = max(mx,cur);
        sum += path[i];
    }
    return mx;
}

void solve()
{
    ll n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    vector<ll>p(n), a(n), pathB, pathS;
    for (auto &i : p)  cin >> i;
    for (auto &i : a)  cin >> i;
    find(p, a, pathB, pb);
    find(p, a, pathS, ps);
    ll bs = score(pathB,k), ss = score(pathS,k);
    if(bs == ss)  cout << "Draw" << endl;
    else if(bs > ss)  cout << "Bodya" << endl;
    else cout << "Sasha" << endl;
}

signed main()
{
    FAST;
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}