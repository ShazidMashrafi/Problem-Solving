#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    int ans=0, diff;
    for(int i=1; i<=n; ++i)
    {
        diff=abs(v[i]-i);
        ans=__gcd(ans,diff);
    }
    cout<<ans<<endl;
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