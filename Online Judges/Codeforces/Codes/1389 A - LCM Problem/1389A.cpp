#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int l,r;
    cin>>l>>r;
    if(2*l>r)
        cout<<-1<<" "<<-1<<endl;
    else
        cout<<l<<" "<<2*l<<endl;
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