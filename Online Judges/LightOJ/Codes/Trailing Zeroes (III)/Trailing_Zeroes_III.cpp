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

int count(int num)
{
    int ans = 0;
    for(int i=5; i <= num; i *= 5)
    {
        int m = num/i;  
        ans += m;
    }
    return ans;
}
void solve()
{
    int x;
    cin >> x;
    int low = 0, high = 10 * x, ans = -1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        int ct = count(mid);
        if(ct == x)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(ct >= x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    if(ans == -1)
        cout << "impossible" << endl;
    else 
        cout << ans << endl;
}

signed main()
{
    FAST;
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        cout<<"Case "<<TC<<": ";
        solve();
    }
}