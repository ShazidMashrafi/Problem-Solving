#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n,h;
    cin>>n>>h;
    int w=0;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        if(x>h) w=w+2;
        else w++;
    }
    cout<<w<<endl;
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