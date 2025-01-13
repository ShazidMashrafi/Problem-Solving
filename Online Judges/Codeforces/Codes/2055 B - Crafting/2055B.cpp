#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include <debug.h>
#endif
#define int long long
#define endl '\n'
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));

void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1), pre(n + 2, 0);

    for (int i = 1; i <= n; ++i) 
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) 
    {
        cin >> b[i];
        if (b[i] > a[i]) 
        {
            int need = b[i] - a[i];
            pre[1] -= need;
            pre[i] += 2 * need;
            pre[i + 1] -= 2 * need; 
            pre[n + 1] += need;      
        }
    }

    for (int i = 1; i <= n; ++i) 
    {
        pre[i] += pre[i - 1];
    }

    for (int i = 1; i <= n; ++i) 
    {
        if (a[i] + pre[i] < b[i]) 
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

signed main() 
{
    FAST;
    int TCS;
    cin >> TCS;
    while (TCS--) 
    {
        solve();
    }
}
