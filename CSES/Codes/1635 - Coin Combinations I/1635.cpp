#include<bits/stdc++.h>
using namespace std;
#define ll 	long long
const int MOD=1e9+7;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>v(n),dp(x+1,0);
    for(auto &i:v)  cin>>i;
    dp[0]=1;
    for(int i=1; i<=x; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(v[j]<=i)
                dp[i]=(dp[i]+dp[i-v[j]])%MOD;
        }
    }
    cout<<dp[x]<<endl;
}