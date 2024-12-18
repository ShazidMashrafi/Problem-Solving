#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ct=0;
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        if(a[i]==1 && a[j]==0) ct++;
        else if(a[i]==1 && a[j]==1) i--;
        else if(a[i]==0 && a[j]==0) j++;
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