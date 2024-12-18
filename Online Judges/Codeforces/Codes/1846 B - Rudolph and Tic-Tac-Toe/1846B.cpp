#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    if(s1=="XXX") cout<<"X"<<endl;
    else if (s1=="OOO") cout<<"O"<<endl;
    else if(s1=="+++") cout<<"+"<<endl;

    else if(s2=="XXX") cout<<"X"<<endl;
    else if (s2=="OOO") cout<<"O"<<endl;
    else if(s2=="+++") cout<<"+"<<endl;

    else if(s3=="XXX") cout<<"X"<<endl;
    else if (s3=="OOO") cout<<"O"<<endl;
    else if(s3=="+++") cout<<"+"<<endl;


    else if(s1[0]=='X' && s2[0]=='X' && s3[0]=='X') cout<<"X"<<endl;
    else if(s1[0]=='O' && s2[0]=='O' && s3[0]=='O') cout<<"O"<<endl;
    else if(s1[0]=='+' && s2[0]=='+' && s3[0]=='+') cout<<"+"<<endl;

    else if(s1[1]=='X' && s2[1]=='X' && s3[1]=='X') cout<<"X"<<endl;
    else if(s1[1]=='O' && s2[1]=='O' && s3[1]=='O') cout<<"O"<<endl;
    else if(s1[1]=='+' && s2[1]=='+' && s3[1]=='+') cout<<"+"<<endl;

    else if(s1[2]=='X' && s2[2]=='X' && s3[2]=='X') cout<<"X"<<endl;
    else if(s1[2]=='O' && s2[2]=='O' && s3[2]=='O') cout<<"O"<<endl;
    else if(s1[2]=='+' && s2[2]=='+' && s3[2]=='+') cout<<"+"<<endl;


    else if(s1[0]=='X' && s2[1]=='X' && s3[2]=='X') cout<<"X"<<endl;
    else if(s1[0]=='O' && s2[1]=='O' && s3[2]=='O') cout<<"O"<<endl;
    else if(s1[0]=='+' && s2[1]=='+' && s3[2]=='+') cout<<"+"<<endl;

    else if(s1[2]=='X' && s2[1]=='X' && s3[0]=='X') cout<<"X"<<endl;
    else if(s1[2]=='O' && s2[1]=='O' && s3[0]=='O') cout<<"O"<<endl;
    else if(s1[2]=='+' && s2[1]=='+' && s3[0]=='+') cout<<"+"<<endl;

    else cout<<"DRAW"<<endl;    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    cin.ignore();
    while (TC--) solve();
}