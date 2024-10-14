#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    vector<int>a;
    vector<int>b;
    for(int i=0; i<3; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<3; i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int alice=accumulate(a.begin()+1,a.end(),0);
    int bob=accumulate(b.begin()+1,b.end(),0);

    if(alice>bob) cout<<"Alice"<<endl;
    else if(bob>alice) cout<<"Bob"<<endl;
    else cout<<"Tie"<<endl;
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