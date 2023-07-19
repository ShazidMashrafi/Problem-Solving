#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    string s1=" I hate that";
    string s2=" I love that";
    string s;
    for(int i=1; i<n; i++)
    {
        if(i & 1)
            s+=s1;
        else
            s+=s2;
    }
    if(n&1) s=s+" I hate it";
    else s=s+" I love it";
    cout<<s<<endl;
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