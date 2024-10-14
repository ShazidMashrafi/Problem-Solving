#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a,b,r;
    cin>>a>>b;
    r=abs(a*b-(a+b));
    cout<<r<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    //cin >> TC;
    //cin.ignore();
    while (TC--) solve();
}