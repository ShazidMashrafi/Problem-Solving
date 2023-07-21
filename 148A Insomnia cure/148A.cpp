#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    set<int>damaged;
    for(int i=k; i<=d; i+=k)
    {
        damaged.insert(i);
    }
    for(int i=l; i<=d; i+=l)
    {
        damaged.insert(i);
    }
    for(int i=m; i<=d; i+=m)
    {
        damaged.insert(i);
    }
    for(int i=n; i<=d; i+=n)
    {
        damaged.insert(i);
    }
    cout<<damaged.size()<<endl;
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