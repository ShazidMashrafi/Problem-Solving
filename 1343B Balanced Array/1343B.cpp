#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    if(n%4!=0)
        cout<<"NO"<<endl;
    else
    {
        int even_sum=0;
        int odd_sum=0;
        for(int i=2; i<=n; i+=2)
        {
            v.push_back(i);
            even_sum+=i;
        }
        int ct=0;
        for(int i=1; i<n; i+=2)
        {
            if(ct==(n/2)-1)
                break;
            v.push_back(i);
            odd_sum+=i;
            ct++;
        }
        v.push_back(even_sum-odd_sum);
        cout<<"YES"<<endl;
        for(auto it:v)
            cout<<it<<" ";
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