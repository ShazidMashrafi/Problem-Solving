#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, x;
    cin >> n >> x;
    if (n < 3)
        cout << "1" << endl;
    else
    {
        n = n - 2;
        int f;
        if (n % x == 0)
            f = n / x + 1;
        else
            f = n / x + 2;
        cout << f << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    cin.ignore();
    while (TC--)
        solve();
}