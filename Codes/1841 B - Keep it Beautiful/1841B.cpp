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
    string s="1";
    int last=v[0];
    bool increase=1;
    for(int i=1; i<n; ++i)
    {
        if(v[i]>=last && increase)
        {
            s.push_back('1');
            last=v[i];
        }
        else if(v[i]<last && v[0]>=v[i] && increase)
        {
            increase=0;
            last=v[i];
            s.push_back('1');
        }
        else if(v[i]>=last && v[i]<=v[0])
        {
            last=v[i];
            s.push_back('1');
        }
        else
            s.push_back('0');
    }
    cout<<s<<endl;
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