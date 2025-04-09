#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()==1)
        cout<<"NO"<<endl;
    else
    {
        auto it=++s.begin();
        cout<<*it<<endl;
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