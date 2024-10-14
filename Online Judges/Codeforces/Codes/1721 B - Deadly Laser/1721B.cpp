#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, s1, s2, d;
    cin >> n >> m >> s1 >> s2 >> d;
    bool pass=true;
    if (s1+d>=n && s2+d>=m) pass=false;
    else if (s1-d<=1 && s2-d<=1) pass=false;
    else if (s1+d>=n && s1-d<=1) pass=false;
    else if(s2+d>=m && s2-d<=1) pass=false;
    if(pass) cout<<n+m-2<<endl;
    else cout<<"-1"<<endl;
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