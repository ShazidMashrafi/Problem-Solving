#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    bool red=false;
    for(int i=0; i<8; ++i)
    {
        string s;
        cin>>s;
        if(s=="RRRRRRRR") red=true;
    }
    if(red) cout<<"R"<<endl;
    else cout<<"B"<<endl;    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    cin.ignore();
    while (TC--)
        solve();
}