#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N=1e5+10;
int r[N],a[N];

void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        r[a[i]]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(r[i] == 0) cout<<i<<" ";
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