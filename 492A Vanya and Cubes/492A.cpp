#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n,cubes=0;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        cubes+=(i*i+i)/2;
        if(cubes>n)
        {
            cout<<i-1<<endl;
            break;
        }
        else if(cubes==n)
        {
            cout<<i<<endl;
            break;
        }
    }
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