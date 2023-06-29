#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a,x,count=0;
    cin>>a;
    for(int i=0; i<3; ++i)
    {
        cin>>x;
        if(x>a) count++;
    }
    cout<<count<<endl;
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