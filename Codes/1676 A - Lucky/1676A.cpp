#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    string s;
    cin>>s;
    int first_sum=0, last_sum=0;
    for(int i=0; i<s.size(); ++i)
    {
        if(i<3)
            first_sum+=s[i];
        else
            last_sum+=s[i];
    }
    if(first_sum==last_sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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