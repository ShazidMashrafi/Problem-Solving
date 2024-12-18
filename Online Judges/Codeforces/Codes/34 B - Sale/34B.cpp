#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0; i<m; ++i)
    {
        if(v[i]>=0)
            break;
        else
            sum+=abs(v[i]);
    }
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