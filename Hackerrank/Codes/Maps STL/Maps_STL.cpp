#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    map<string, int> m;
    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            string s;
            int num;
            cin >> s >> num;
            m[s] = m[s] + num;
        }
        else if (t == 2)
        {
            string s;
            cin >> s;
            m[s] = 0;
        }
        else if (t == 3)
        {
            string s;
            cin >> s;
            cout << m[s] << endl;
        }
    }
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