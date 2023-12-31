#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if((2*b-c)>0 && (2*b-c)%a==0)
        cout << "YES" << endl;
    else if((a+c)%(2*b)==0)
        cout << "YES" << endl;  
    else if((2*b-a)>0 && (2*b-a)%c==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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