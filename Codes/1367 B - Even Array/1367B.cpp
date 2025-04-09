#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n;
    cin>>n;
    int odd_ct=0, even_ct=0;
    for(int i=0; i < n; ++i)
    {
        int x;
        cin>>x;
        if(i%2==0 && x%2!=0)
            even_ct++;
        else if(i%2!=0 && x%2==0)
            odd_ct++;
    }
    if(odd_ct!=even_ct)
        cout<<-1<<endl;
    else
        cout<<odd_ct<<endl;
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