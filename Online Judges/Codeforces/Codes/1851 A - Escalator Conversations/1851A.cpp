#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n, m, k, H;
    cin>>n>>m>>k>>H;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ct=0;
    for(int i=0; i<n; ++i)
    {
        int d=abs(H-v[i]);
        if(d<=(m-1)*k && d%k==0 && v[i]!=H)
            ct++;
    }
    cout<<ct<<endl;
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