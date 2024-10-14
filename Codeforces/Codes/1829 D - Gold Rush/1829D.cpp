#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int n,int m)
{
    if(n==m) return true;
    else if(n%3!=0 || n<m) return false;
    else return (check (n/3,m) || check(2*n/3,m)); 
}

void solve()
{
    int n,m;
    cin>>n>>m;
    bool p=check(n,m);
    if(p) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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