#include <bits/stdc++.h>
using namespace std;
#define ll long long
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, 0));
    if (weight[0] <= maxWeight)
    {
        for (int w = weight[0]; w <= maxWeight; ++w)
            dp[0][w] = value[0];
    }
    for (int index = 1; index < n; ++index)
    {
        for (int w = 0; w <= maxWeight; ++w)
        {
            ll include = 0;
            if (weight[index] <= w)
                include = value[index] + dp[index - 1][w - weight[index]];
            ll exclude = dp[index - 1][w];
            dp[index][w] = max(include, exclude);
        }
    }
    return dp[n - 1][maxWeight];
}