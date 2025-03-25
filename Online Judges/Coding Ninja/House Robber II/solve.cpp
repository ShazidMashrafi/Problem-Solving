#include <bits/stdc++.h> 
using namespace std;
long long int solve(vector<int> &val)
{
    long long int n=val.size();
    long long pre2=0;
    long long int pre1=val[0];
    for(int i=1; i<n; ++i)
    {
        long long int incl=pre2+val[i];
        long long int excl=pre1;
        long long int ans=max(incl,excl);
        pre2=pre1;
        pre1=ans;
    }
    return pre1;
}
long long int houseRobber(vector<int>& valueInHouse)
{
    int n=valueInHouse.size();
    if(n==1)    return valueInHouse[0];
    vector<int>first,last;
    for(int i=0; i<n; ++i)
    {
        if(i!=n-1)  first.push_back(valueInHouse[i]);
        if(i!=0)  last.push_back(valueInHouse[i]);
    }
    return max(solve(first),solve(last));
}