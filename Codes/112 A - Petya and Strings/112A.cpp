#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[1000],s2[1000];
    cin>>s1>>s2;
    strlwr(s1);
    strlwr(s2);
    int c=strcmp(s1,s2);
    cout<<c;
}