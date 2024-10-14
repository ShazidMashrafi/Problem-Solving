#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,q;
    cin>>n>>q;
    int a[n+10],fw[n+10],bw[n+10];
    fw[0]=bw[n+1]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        fw[i]=__gcd(fw[i-1],a[i]);
    }
    for(int i=n; i>=1; i--)
    {
        bw[i]=__gcd(bw[i+1],a[i]);
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<__gcd(fw[l-1],bw[r+1])<<endl;
    }
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