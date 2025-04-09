#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int count=0;
    cin>>n;
    while(n!=0)
    {
        if(n%10==4 || n%10==7) count++;
        n=n/10;
    }
    if(count==4 || count==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}