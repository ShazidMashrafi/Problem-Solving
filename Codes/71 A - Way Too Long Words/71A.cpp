#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,len;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        len=s.size();
        if(len>10) cout<<s[0]<<len-2<<s[len-1]<<endl;
        else cout<<s<<endl;
    }
}
