#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,value,move,x,y;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>value;
            if(value==1) break;
        }
        if(value==1) break;
    }
    move= abs(i-3)+abs(j-3);
    cout<<move<<endl;
}