#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (c > s[i])
        {
            s.insert(i, 1, c);
            cout << s << endl;
            return;
        }
    }
    s=s+c;
    cout<<s<<endl;
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