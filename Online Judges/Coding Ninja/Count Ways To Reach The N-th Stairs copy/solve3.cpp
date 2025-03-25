#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int countDistinctWays(int nStairs)
{
    int prev1=1, prev2=1;
    for(int i=2; i<=nStairs; ++i)
    {
        int curr=(prev1+prev2)%MOD;
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}