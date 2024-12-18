#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,x=0,y=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size(); ++i)
    {
        if(s[i]=='U') y++;
        else if(s[i]=='D') y--;
        else if (s[i]=='R') x++;
        else if(s[i]=='L') x--;
        if(x==1 && y==1) 
        {
            cout<<"YES"<<endl;
            return;
        }
    }
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