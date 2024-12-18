#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    bool beautiful = false;
    while (!beautiful)
    {
        n++;
        vector<int> v;
        int temp = n;
        while (temp > 0)
        {
            int r;
            r = temp % 10;
            temp = temp / 10;
            v.push_back(r);
        }
        bool same = false;
        for (int i = 0; i < v.size() - 1; ++i)
        {
            if (same)
                break;
            for (int j = i + 1; j < v.size();  ++j)
            {
                if (v[i] == v[j])
                {
                    same = true;
                    break;
                }
            }
        }
        if (!same)
            beautiful = true;
    }
    cout<<n<<endl;
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