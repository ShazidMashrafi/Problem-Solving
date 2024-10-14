#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,x,k,p;
    cin>>n>>x>>k>>p;
    for(int i=1; i<=k; ++i)
    {
        if(i<=x) p=p+10;
        else p=p+5;
        if(i==n) p=p+20;
    }
    cout<<p<<endl;
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