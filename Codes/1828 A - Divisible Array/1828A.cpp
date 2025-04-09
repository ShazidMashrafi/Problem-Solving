#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        a[i] = i ;
        sum = sum + i;
    }
    cerr<<sum<<" "<<n<<endl;
    if(sum%n!=0)
    {
        int r=sum%n;
        a[r]=a[r]+r;
    }
    for(int i=1; i<=n ; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    cin.ignore();
    while (TC--)
        solve();
}