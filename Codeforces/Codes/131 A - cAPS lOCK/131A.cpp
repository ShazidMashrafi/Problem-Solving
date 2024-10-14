#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin >> s;
    bool cap = 1;
    for (int i = 1; i < s.size(); ++i)
    {
        if (islower(s[i]))
        {
            cap = 0;
            break;
        }
    }
    if (cap)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if(islower(s[i])) 
                s[i]=toupper(s[i]);
            else s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
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