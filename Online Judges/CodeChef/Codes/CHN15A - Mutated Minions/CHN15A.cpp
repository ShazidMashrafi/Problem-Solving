#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n,k;
    cin>>n>>k;
    int ct=0;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        x=x+k;
        if(x%7==0) ct++;
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