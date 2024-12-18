#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; ++i) cin>>v[i];
    vector<int>v2;
    v2=v;
    sort(v2.begin(),v2.end());
    bool possible=1;
    for(int i=0; i<n; ++i)
    {
        if(v[i]%2==0 && v2[i]%2!=0)
        {
            possible=0;
            break;
        }
        else if (v[i]%2!=0 && v2[i]%2==0)
        {
            possible=0;
            break;
        }
    }
    if(possible)
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