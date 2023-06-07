#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[100];
    cin>>name;
    int i,j,len,count=0;
    len=strlen(name);
    for(i=0;i<len;i++)
    {
        for(j=i+i;j<len;j++)
        {
            if(name[i]==name[j]) count++;
        }
    }
    cout<<len-count<<endl;
    if((len-count)%2!=0) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}