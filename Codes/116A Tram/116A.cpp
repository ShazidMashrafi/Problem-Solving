#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,a,b,min=0,p=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        p=p-a+b;
        if(p>min) min=p;
    }
    cout<<min<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    //cin >> TC;
    while (TC--) solve();
}