#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    map<int,int>ans;
    int max=0;
    for(int i=1; i<=n; ++i)
    {
        int x,y;
        cin>>x>>y;
        if(x<=10)
        {
            ans[y]=i;
        }
    }
    auto it=ans.rbegin();
    cout<<it->second<<endl;
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