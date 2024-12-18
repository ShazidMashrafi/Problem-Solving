#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int q;
    cin>>q;
    set<int>s;
    while(q--)
    {
        int y;
        cin>>y;
        if(y==1)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        else if(y==2)
        {
            int x;
            cin>>x;
            if(s.find(x)!=s.end()) s.erase(x);
        }
        else
        {
            int x;
            cin>>x;
            if(s.find(x)!=s.end()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
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