#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;

long long int countDerangements(int n) 
{
    long long pre2=0,pre1=1;
    for(int i=3; i<=n; ++i)
    {
        long long cur=(i-1)*(pre1+pre2)%MOD;
        pre2=pre1;
        pre1=cur;
    }
    return pre1;
}