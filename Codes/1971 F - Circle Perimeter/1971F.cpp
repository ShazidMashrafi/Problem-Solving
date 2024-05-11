#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

ll points(ll r)
{
    ll p = 0;
    for(ll x = 0; x <= r; ++x)
    {
        ll y,d = (r + 1) * (r + 1) - x * x;
        ll l = 0, h = r;
        while(l <= h)
        {
            ll mid = l + (h - l) / 2;
            if(mid * mid < d)
            {
                y = mid;
                l = mid + 1;
            }
            else    h = mid - 1;
        }
        if(x == 0)    p += (y * 2 + 1);
        else    p += ((y * 2 + 1) * 2);
    }
    return p;
}

void solve()
{
    ll r;
    cin >> r;
    ll p1 = points(r);
    ll p2 = points(r - 1);
    cout << p1 - p2 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}