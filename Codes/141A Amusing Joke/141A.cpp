#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    string a,b,c;
    cin>>a>>b>>c;
    map<char,int>letters;
    for(int i=0; i<a.size(); ++i)
    {
        letters[a[i]]++;
    }
    for(int i=0; i<b.size(); ++i)
    {
        letters[b[i]]++;
    }
    for(int i=0; i<c.size(); ++i)
    {
        letters[c[i]]++;
    }
    bool matching=1;
    for(auto it:letters)
    {
        if(it.second%2!=0)
        {
            matching=0;
            break;
        }
    }
    if(matching)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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