#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int i,money=0;
    for(i=1;i<=w;i++)
    {
        money=money+i*k;
    }
    if(money>n) cout<<money-n<<endl;
    else cout<<0<<endl;
}