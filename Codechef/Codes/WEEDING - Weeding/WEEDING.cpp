#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int weed=0;
    for (int i=0; i < n; ++i)
    {
        int x;
        cin >> x;
        weed=max(x,weed);
    }
    if(weed+k<=m+1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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