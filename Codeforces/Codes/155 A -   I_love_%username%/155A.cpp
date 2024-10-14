#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    int best,worst,ct=0;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        if(i==0)
            best=worst=x;
        if(x<worst)
        {
            ct++;
            worst=x;
        }
        else if(x>best)
        {
            ct++;
            best=x;
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