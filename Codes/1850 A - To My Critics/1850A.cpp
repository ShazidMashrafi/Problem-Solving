#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=10)
        cout<<"YES"<<endl;
    else if(b+c>=10)
        cout<<"YES"<<endl;
    else if(a+c>=10)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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