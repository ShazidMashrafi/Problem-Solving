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
    
    if(!is_sorted(v.begin(),v.end()))
        cout<<0<<endl;
    else
    {
        int d=INT_MAX;
        for(int i=1; i<n; ++i)
        {
            int r;
            r=v[i]-v[i-1];
            if(r<d)
            {
                d=r;
            }
        }
        int ans=(d/2)+1;
        cout<<ans<<endl;
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