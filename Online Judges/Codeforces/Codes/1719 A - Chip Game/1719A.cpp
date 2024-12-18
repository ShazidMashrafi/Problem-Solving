#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,m;
    cin>>n>>m;
    if((n+m)%2==0) cout<<"Tonya"<<endl;
    else cout<<"Burenka"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    cin.ignore();
    while (TC--) solve();
}