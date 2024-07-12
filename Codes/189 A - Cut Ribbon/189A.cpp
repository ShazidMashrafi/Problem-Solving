#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n, a, b, c;
    cin>>n;
    vector<int>v;
    for(int i=0; i<3; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    vector<int>cts;
    int temp,ct,tct;
    if(n%v[0]==0)
    {
        cts.push_back(n/v[0]);
    }
    else
    {
        temp=n;
        ct=0;
        while(temp>0)
        {
            temp=temp-v[1];
            ct++;
            if(temp%v[0]==0 && temp>=v[0])
            {
                ct=ct+temp/v[0];
                temp=temp%v[0];
                break;
            }
        }
        if(temp==0)
            cts.push_back(ct);

        temp=n;
        ct=0;
        while(temp>0)
        {
            temp=temp-v[2];
            ct++;
            if(temp%v[0]==0 && temp>=v[0])
            {
                ct=ct+temp/v[0];
                temp=temp%v[0];
                break;
            }
        }
        if(temp==0)
            cts.push_back(ct);

        ct=0;
        while(n>0)
        {
            n=n-v[2];
            ct++;
            temp=n; 
            tct=ct;
            while(temp>0)
            {
                temp=temp-v[1];
                tct++;
                if(temp%v[0]==0 && temp>=v[0])
                {
                    tct=tct+temp/v[0];
                    temp=temp%v[0];
                    break;
                }
            }
            if(temp==0)
                cts.push_back(tct);
        }
    }
    int ans=*max_element(cts.begin(),cts.end());
    cout<<ans<<endl;
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