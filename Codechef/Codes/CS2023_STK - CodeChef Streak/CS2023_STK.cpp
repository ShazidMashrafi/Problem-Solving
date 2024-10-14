#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int counter(int n)
{
    int count=0,streak=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            count=0;
            
        }
        else 
        {
            count++;
            if(count>streak) streak=count;
        }
    }
    return streak;
}
void solve()
{
    int n,aStreak,oStreak;
    cin>>n;
    oStreak=counter(n);
    aStreak=counter(n);
    if(aStreak>oStreak) cout<<"Addy"<<endl;
    else if(oStreak>aStreak) cout<<"Om"<<endl;
    else cout<<"Draw"<<endl;
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