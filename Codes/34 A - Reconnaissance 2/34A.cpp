#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int d=abs(v[0]-v[n-1]);
    int x=1, y=n;
    for(int i=1; i<n; i++)
    {
        int c=abs(v[i]-v[i-1]);
        if(c<d)
        {
            d=c;
            x=i;
            y=i+1;
        }
    }
    cout<<x<<" "<<y<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    // cin >> TC;
    // cin.ignore();
    while (TC--) solve();
}