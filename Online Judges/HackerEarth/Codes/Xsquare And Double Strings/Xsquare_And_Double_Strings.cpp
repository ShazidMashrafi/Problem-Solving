#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i)
    {
       int x = s[i]-'a';
       a[x]++;
    }
    bool match= false;
    for(int i=0; i<26; ++i)
    {
        if(a[i]>1)
        {
            match=true;
            break;
        }
    }
    if(match) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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