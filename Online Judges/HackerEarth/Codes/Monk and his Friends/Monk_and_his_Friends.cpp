#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,m;
    cin>>n>>m;
    set<ll>student;
    for(int i=0; i<n; ++i)
    {
        ll x;
        cin>>x;
        student.insert(x);
    }
    for(int i=0; i<m; ++i)
    {
        ll x;
        cin>>x;
        if(student.find(x)!=student.end()) cout<<"YES"<<endl;
        else 
        {
            cout<<"NO"<<endl;
            student.insert(x);
        }
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