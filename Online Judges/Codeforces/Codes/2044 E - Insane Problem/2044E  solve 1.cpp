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
ll pow(ll x, ll y, ll m = 1e18) {
    ll ans = 1;
    while (y) {
        if (y & 1) {
            if (ans > m / x) return m + 1; // overflow check
            ans *= x;
        }
        if (y >>= 1) {
            if (x > m / x) return m + 1; // overflow check
            x *= x;
        }
    }
    return ans;
}

void solve() {
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    ll count = 0;
    for (int n = 0; n <= 32; ++n) 
    {
        ll kn = pow(k, n, LLONG_MAX);
        if (kn > r2) break;

        ll low = l1, high = r1, min_x = r1 + 1;
        while (low <= high) 
        {
            ll mid = low + (high - low) / 2;
            if (mid * kn >= l2) {
                min_x = mid;
                high = mid - 1;
            } 
            else
                low = mid + 1;
        }

        low = l1, high = r1;
        ll max_x = l1 - 1;
        while (low <= high) 
        {
            ll mid = low + (high - low) / 2;
            if (mid * kn <= r2) 
            {
                max_x = mid;
                low = mid + 1;
            } 
            else
                high = mid - 1;
        }

        if (min_x <= max_x)
            count += (max_x - min_x + 1);
    }
    cout << count << endl;
}

signed main() {
    FAST;
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC) {
        solve();
    }
}