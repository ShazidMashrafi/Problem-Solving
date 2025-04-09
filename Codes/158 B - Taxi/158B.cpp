#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    int ct1=0, ct2=0, ct3=0, ct4=0;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        if(x==1)
            ct1++;
        else if(x==2)
            ct2++;
        else if(x==3)
            ct3++;
        else 
            ct4++;
    }
    int taxi=ct4;
    if(ct2>1)
    {
        taxi=taxi+ct2/2;
        ct2=ct2%2;
    }
    while(ct3>0 && ct1>0)
    {
        taxi++;
        ct3--;
        ct1--;
    }
    if(ct3>0) 
        taxi=taxi+ct3;
    if(ct1>0 && ct2>0) 
    {
        taxi++;
        ct2--;
        ct1=ct1-2;
    }
    while(ct2>0)
    {
        taxi++;
        ct2--;
    }
    while(ct1>0)
    {
        taxi++;
        ct1=ct1-4;
    }
    cout<<taxi<<endl;
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