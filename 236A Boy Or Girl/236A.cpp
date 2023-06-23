#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int l[26];

void solve()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); ++i)
    {
        l[s[i]-'a']++;
    }
    int ct=0;
    for(int i=0; i<26; ++i)
    {
        if(l[i]>0) ct++;
    }
    if(ct%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
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