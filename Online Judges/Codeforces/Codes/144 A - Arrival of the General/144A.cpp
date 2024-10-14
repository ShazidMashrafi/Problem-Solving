#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    vector<int>line;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        line.push_back(x);
    }
    int min, min_pos, max, max_pos;
    min=max_pos=INT_MAX;
    max=min_pos=INT_MIN;
    
    for(int i=0; i<n; ++i)
    {
        if(line[i]>max)
        {
            max=line[i];
            max_pos=i;
        }
    }
    for(int i=n-1; i>=0; --i)
    {
        if(line[i]<min)
        {
            min=line[i];
            min_pos=i;
        }
    }
    if(max_pos<min_pos)
    {
        int ans=max_pos+(n-1-min_pos);
        cout<<ans<<endl;
    }
    else 
    {
        int ans=max_pos+(n-1-min_pos)-1;
        cout<<ans<<endl;
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