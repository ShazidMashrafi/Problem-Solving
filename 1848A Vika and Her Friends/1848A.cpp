#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int x,y;
    cin>>x>>y;
    bool caught=false;
    while(k--)
    {
        int p,q;
        cin>>p>>q;
        int d=abs(x-p)+abs(y-q);
        if(d%2==0)
        {
            caught=true;
        }
    }
    if(caught) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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