#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,string>a, pair<int,string>b)
{
    if(a.first!=b.first) return a.first>b.first;
    else return a.second<b.second;
}
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,string>>v(n);
    for(int i=0; i<n; ++i)
    {
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end(),cmp);
    
    for(auto it : v)
    {
        cout<<it.second<<" "<<it.first<<endl;
    }
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