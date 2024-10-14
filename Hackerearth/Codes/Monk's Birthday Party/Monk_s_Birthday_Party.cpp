#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    set<string>friends;
    for(int i=0; i<n; ++i)
    {
        string s;
        cin>>s;
        friends.insert(s);
    }
    for(auto it: friends)
    {
        cout<<it<<endl;
    }
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