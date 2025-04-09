#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char c;
                c = s[i];
                s[i] = s[i + 1];
                s[i + 1] = c;
                i++;
            }
        }
    }
    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    // cin >> TC;
    // cin.ignore();
    while (TC--)
        solve();
}