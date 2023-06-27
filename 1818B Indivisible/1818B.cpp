#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    if(n==1) cout<<"1"<<endl;
    else if(n%2!=0) cout<<"-1"<<endl;
    else
    {
        for(int i=1; i<=n; i+=2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
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