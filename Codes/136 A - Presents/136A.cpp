#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    map<int,int>m;
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        int x;
        cin>>x;
        m[x]=i; 
    } 
    for(auto it: m)
    {
        cout<<it.second<<" ";
    }
    cout<<endl;
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