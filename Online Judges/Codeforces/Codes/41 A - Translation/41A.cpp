#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s,rs,t;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    if(s==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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