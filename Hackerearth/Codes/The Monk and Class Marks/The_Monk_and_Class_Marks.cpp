#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    multiset<pair<int,string>>student;
    for(int i=0; i<n; ++i)
    {
        string s;
        int x;
        cin>>s>>x;
        student.insert({-1*x,s});
    }
    for(auto it: student)
    {
        cout<<it.second<<" "<<-1*it.first<<endl;
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