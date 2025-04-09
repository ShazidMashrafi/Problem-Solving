#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,t1,t2,t;
    cin>>n;
    t=t1=t2=INT_MAX;
    for(int i=0; i<n; ++i)
    {
        int x;
        string s;
        cin>>x>>s;
        if(s[0]=='1') t1=min(x,t1);
        if(s[1]=='1') t2=min(x,t2);
        if(s[0]=='1' && s[1]=='1') t=min(x,t);
    }
    if(t1==INT_MAX || t2==INT_MAX) cout<<"-1"<<endl;
    else 
    {
        if(t<t1+t2) cout<<t<<endl;
        else cout<<t1+t2<<endl;
    }
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