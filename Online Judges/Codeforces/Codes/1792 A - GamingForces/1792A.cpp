#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,num1=0,h;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>h;
            if(h==1)
                num1++;
        }
        cout<<n-(num1/2)<<endl;
    }
}