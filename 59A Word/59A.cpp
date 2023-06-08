#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,len,uppercase=0,lowercase=0;
    char s[100];
    cin>>s;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(islower(s[i])) lowercase++;
        else uppercase++;
    }
    if(lowercase<uppercase)
    {
        for(i=0;i<len;i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {
        for(i=0;i<len;i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
}