#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    vector<string> v;
    for (int i = 0; i < 8; ++i)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    string s;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if(v[i][j]!='.')
                s+=v[i][j]; 
        }
    }
    cout << s << endl;
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