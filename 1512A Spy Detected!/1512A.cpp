#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    for(int i=1; i<n-1; ++i)
    {
        if(a[i]!=a[i-1] && a[i]!=a[i+1])
        {
            cout<<i+1<<endl;
            return;
        }
    }
    if(a[0]!=a[n/2]) cout<<"1"<<endl;
    else cout<<n<<endl;
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