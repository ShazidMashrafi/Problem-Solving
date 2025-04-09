#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string x, y;
    int a,b;
    cin >> x >> a >> y >> b;
    int flag = 0;
    if (x.size()+a > y.size()+b) flag = 1;
    else if (x.size()+a < y.size()+b) flag = 2;
    else if(x.size()+a==y.size()+b)
    {
        while(x.size()>y.size()) y=y+'0';
        while(x.size()<y.size()) x=x+'0';
        if(x>y) flag=1;
        else if(x<y) flag=2;
    }
    if (flag == 0)
        cout << "=" << endl;
    else if (flag == 1)
        cout << ">" << endl;
    else if (flag == 2)
        cout << "<" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    cin.ignore();
    while (TC--)
        solve();
}