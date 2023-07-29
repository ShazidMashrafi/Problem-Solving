#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int b, c, h;
    cin>>b>>c>>h;
    if(b==c+h)
        cout<<b+c+h-1<<endl;
    else if(b>c+h)
        cout<<2*(c+h)+1<<endl;
    else
        cout<<2*b-1<<endl;
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