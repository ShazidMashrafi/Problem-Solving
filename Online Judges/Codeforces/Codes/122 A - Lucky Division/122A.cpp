#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    for(int num = 1; num <= 1000; ++num)
    {
        int r,temp;
        temp = num;
        bool lucky = true;
        while(temp > 0)
        {
            r = temp % 10;
            temp = temp / 10;
            if(r != 4 && r != 7)
            {
                lucky = false;
                break;
            }
        }
        if(lucky && n%num==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
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