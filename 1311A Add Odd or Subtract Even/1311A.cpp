#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int a,b;
    cin>>a>>b;
    int ct=0;
    while(a!=b)
    {
        if(a==b) break;
        else if(a>b)
        {
            int d=a-b;
            if(d%2==0)
            {
                a=a-d;
                ct++;
            }
            else
            {
                a=a-d-1;
                ct++;
            }
        }
        else
        {
            int d=b-a;
            if(d%2!=0)
            {
                a=a+d;
                ct++;
            }
            else
            {
                a=a+d-1;
                ct++;
            }
        }
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