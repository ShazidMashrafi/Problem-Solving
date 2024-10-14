#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,t;
    cin >> n >> t;
    string s;
    if (t == 10)
    {
        if(n==1)
        {
            cout<<-1<<endl;
            return;
        }
        s += '1';
        for (int i = 0; i < n - 1; i++)
        {
            s += '0';
        }
    }
    else
    {
        char c=t+'0';
        for (int i = 0; i < n; i++)
        {
            s += c;
        }
    }
    cout << s << endl;
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