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
#define  pb  push_back
#define  sz(x)  (int)(x).size()
#define  all(x)  x.begin(), x.end()
#define  yn(f)  f? cout<<"YES\n":cout<<"NO\n"
#define  Dpos(n) fixed << setprecision(n)
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll power(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

#define P complex<int>
#define X real()
#define Y imag()

int cross(P a, P b, P c) 
{
    P u = b - a;
    P v = c - a;
    return (conj(u) * v).Y;
}

bool cmp(const P &a, const P &b) 
{
    if(a.X == b.X)  return a.Y < b.Y;
    return a.X < b.X;
}

bool mid(P a, P b, P c)
{
    vector<P> v = {a, b, c};
    sort(all(v), cmp);
    return v[1] == c;
}

int sign(int x)
{
    return (x > 0) - (x < 0);
}

bool check(P a, P b, P c, P d)
{
    int cp1 = cross(a, b, c);
    int cp2 = cross(a, b, d);
    int cp3 = cross(c, d, a);
    int cp4 = cross(c, d, b);
    if(cp1 == 0 && mid(a, b, c)) return true;
    if(cp2 == 0 && mid(a, b, d)) return true;
    if(cp3 == 0 && mid(c, d, a)) return true;
    if(cp4 == 0 && mid(c, d, b)) return true;
    if(sign(cp1) != sign(cp2) && sign(cp3) != sign(cp4)) return 1;
    return false;
}

void solve()
{
    int x, y;
    P a, b, c, d;
    cin >> x >> y; a = {x, y};
    cin >> x >> y; b = {x, y};
    cin >> x >> y; c = {x, y};
    cin >> x >> y; d = {x, y};
    yn(check(a, b, c, d));
}

signed main()
{
    FAST;
    // freopen("input.txt", "r", stdin);    
    // freopen("output.txt", "w", stdout);  

    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}