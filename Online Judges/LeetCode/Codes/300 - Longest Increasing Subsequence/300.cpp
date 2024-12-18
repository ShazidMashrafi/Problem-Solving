#include<bits/stdc++.h>
using namespace std;
#define ll 	long long

int dp[2515];

int lis(int i,vector<int>&a)
{
    if(dp[i] != -1)     return dp[i];
    int ans=1;
    for(int j=0; j<i; ++j)
    {
        if(a[i]>a[j])
            ans = max(ans, lis(j,a)+1);
    }
    return dp[i] = ans;
}

int lengthOfLIS(vector<int>& nums)
{
    memset(dp,-1,sizeof(dp));
    int ans=0;
    for(int i=0; i<nums.size(); ++i)
        ans = max(ans, lis(i,nums));
    return ans;
}