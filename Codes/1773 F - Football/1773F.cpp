#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(n==1)
    {
        if(a==b)
        {
            cout<<1<<endl;
            cout<<a<<":"<<b<<endl;
            return;
        }
        else
        {
            cout<<0<<endl;
            cout<<a<<":"<<b<<endl;
        }
    }
    else if(n==a+b)
    {
        cout<<0<<endl;
        for(int i=1; i<=a; ++i)
            cout<<1<<":"<<0<<endl;
        for(int i=1; i<=b; ++i)
            cout<<0<<":"<<1<<endl;
    }
    else if(n<a+b)
    {
        cout<<0<<endl;
        if(n<=b)
        {
            int ct=0;
            bool zero=1;
            if(a!=0)
            {
                cout<<a<<":"<<0<<endl;
                zero=0;
                ct++;
            }
            for(int i=ct+1; i<n; ++i)
            {
                cout<<0<<":"<<1<<endl;
                ct++;
            }
            if(zero) cout<<0<<":"<<b-ct<<endl;
            else cout<<0<<":"<<b-ct+1<<endl;
        }
        else if(n<=a)
        {
            int ct=0;
            bool zero=1;
            if(b!=0)
            {
                cout<<0<<":"<<b<<endl;
                ct++;
                zero=0;
            }
            for(int i=ct+1; i<n; ++i)
            {
                cout<<1<<":"<<0<<endl;
                ct++;
            }
            if(zero)
                cout<<a-ct<<":"<<0<<endl;
            else 
                cout<<a-ct+1<<":"<<0<<endl;
        }
        else
        {
            int ct=0;
            for(int i=1; i<=a; ++i)
            {
                cout<<1<<":"<<0<<endl;
            }
            for(int i=1; i<n-a; ++i)
            {
                cout<<0<<":"<<1<<endl;
                ct++;
            }
            cout<<0<<":"<<b-ct<<endl;
        }
    }
    else
    {
        cout<<n-a-b<<endl;
        for(int i=1; i<=n-a-b; ++i)
        {
            cout<<0<<":"<<0<<endl;
        }
        for(int i=1; i<=a; ++i)
        {
            cout<<1<<":"<<0<<endl;
        }
        for(int i=1; i<=b; ++i)
        {
            cout<<0<<":"<<1<<endl;
        }
    }
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