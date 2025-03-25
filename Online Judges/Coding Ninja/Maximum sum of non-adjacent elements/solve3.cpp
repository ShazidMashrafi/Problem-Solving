#include <bits/stdc++.h> 
using namespace std;
int maximumNonAdjacentSum(vector<int> &nums)
{
    int n=nums.size();
    int pre2=0;
    int pre1=nums[0];
    for(int i=1; i<n; ++i)
    {
        int incl=pre2+nums[i];
        int excl=pre1;
        int ans=max(incl,excl);
        pre2=pre1;
        pre1=ans;
    }
    return pre1;
}