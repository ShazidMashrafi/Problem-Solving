#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int c4=0,c7=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i]=='4') c4++;
        else if(s[i]=='7') c7++;
    }
    if(c4==0 && c7==0) cout<<"-1"<<endl;
    else if(c4>c7) cout<<"4"<<endl;
    else if(c7>c4) cout<<"7"<<endl;
    else if(c7==c4) cout<<"4"<<endl;
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