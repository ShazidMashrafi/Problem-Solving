#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=5,count=0;
    cin>>n;
    while(n>0)
    {
        while(i>=1)
        {
            while(n-i>=0) 
            {
                count++;
                n=n-i;
            }
            i--;
        }
        cout<<count;
    }
}