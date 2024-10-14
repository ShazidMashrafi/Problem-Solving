#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,d;
    cin>>n>>d;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ct=0;
    for(int i=1; i<n; ++i)
    {
        if(v[i]<=v[i-1])
        {
            int x=v[i-1]-v[i];
            if(x==0)
            {
                v[i]+=d;
                ct++;
            }
            else if(x%d==0)
            {
                int y=x/d;
                ct+=y;
                v[i]+=y*d;
            }
            else
            {
                int y=(x/d)+1;
                ct+=y;
                v[i]+=y*d;
            }
        }
        if(v[i]==v[i-1])
        {
            v[i]+=d;
            ct++;
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