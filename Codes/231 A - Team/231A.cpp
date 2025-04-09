#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum,count=0;
    int p[3];
    cin>>n;
    while(n--)
    {
        sum=0;
        for(i=0;i<3;i++)
        {
            cin>>p[i];
            sum+=p[i];
        }
        if(sum>=2) count++;
    }
    cout<<count;
}