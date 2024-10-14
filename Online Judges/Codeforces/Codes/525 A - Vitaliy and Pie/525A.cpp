#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int>m;
    int ct=0;
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            m[s[i]]++;
        }
        else
        {
            char c;
            c=tolower(s[i]);
            if(m[c]>0)
            {
                m[c]--;
            }
            else ct++;
        }
    }
    cout<<ct<<endl;
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