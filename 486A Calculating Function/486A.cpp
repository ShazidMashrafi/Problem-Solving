#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n,sum=0;
    cin>>n;
    if(n%2==0) sum=n/2;
    else sum=-(n/2+1);
    cout<<sum<<endl;
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