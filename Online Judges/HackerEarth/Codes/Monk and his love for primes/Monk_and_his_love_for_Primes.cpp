#include <bits/stdc++.h>
using namespace std;
using ll = long long;

char lower(char c)
{
    return 'a'+c-'A';
}

char upper(char c)
{
    return 'A'+c-'a';
}

int isPrime(int sum)
{
    for(int i=2;i<sum;i++)
    {
        if(sum%i==0) return 0;
    }
    return 1;
}

void solve()
{
    string s;
    int sum=0;
    cin>>s;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            sum+=upper(s[i]);
        }
        else 
        {
            sum-=lower(s[i]);
        }
    }
    if(sum<0) sum*=-1;
    cout<<isPrime(sum)<<endl;
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