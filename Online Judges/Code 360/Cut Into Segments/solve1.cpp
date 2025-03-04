#include<bits/stdc++.h>
using namespace std;
int solve(int n, int x, int y, int z,vector<int>&dp)
{
    if(n==0) return 0;
    if(n<0) return INT_MIN;
    if(dp[n]!=-1)   return dp[n];
    int a=solve(n-x,x,y,z,dp)+1;
    int b=solve(n-y,x,y,z,dp)+1;
    int c=solve(n-z,x,y,z,dp)+1;
    return dp[n]=max(a,max(b,c));
}

int cutSegments(int n, int x, int y, int z) 
{
	vector<int>dp(n+1,-1);
    int ans=solve(n,x,y,z,dp);
    if(ans<0) ans=0;
    return ans;
}