#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(vector<int> &weight, vector<int> &value, ll n, ll W, vector<vector<int>> &dp)
{
    if (n == 0)
    {
        if (weight[0] <= W)
            return value[0];
        else
            return 0;
    }
    if (dp[n][W] != -1)
        return dp[n][W];
    ll include = 0;
    if (weight[n] <= W)
        include = value[n] + solve(weight, value, n - 1, W - weight[n], dp);
    ll exclude = solve(weight, value, n - 1, W, dp);
    return dp[n][W] = max(include, exclude);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
    return solve(weight, value, n - 1, maxWeight, dp);
}