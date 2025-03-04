#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prev1=1;
    int prev2=0;
    if(n==0)
    {    
        cout<<prev2<<endl;
        return 0;
    }
    for(int i=2; i<=n; ++i)
    {
        int curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    cout<<prev1<<endl;
}