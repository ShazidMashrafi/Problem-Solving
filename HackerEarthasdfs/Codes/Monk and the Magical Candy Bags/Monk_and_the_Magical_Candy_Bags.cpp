#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,k;
    cin>>n>>k;
    multiset<ll>bags;
    for(int i=0; i<n; ++i)
    {
        ll x;
        cin>>x;
        bags.insert(x);
    }
    ll total=0;
    for(int i=0; i<k; ++i)
    {
        auto it= --bags.end();
        total+=*it;
        bags.insert(*it/2);
        bags.erase(it);
    }
    cout<<total<<endl;
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