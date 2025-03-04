#include <bits/stdc++.h>
using namespace std;
#define ll long long
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    vector<ll> prev(maxWeight + 1, 0), curr(maxWeight + 1, 0);
    if (weight[0] <= maxWeight)
    {
        for (int w = weight[0]; w <= maxWeight; ++w)
            prev[w] = value[0];
    }
    for (int index = 1; index < n; ++index)
    {
        for (int w = 0; w <= maxWeight; ++w)
        {
            ll include = 0;
            if (weight[index] <= w)
                include = value[index] + prev[w - weight[index]];
            ll exclude = prev[w];
            curr[w] = max(include, exclude);
        }
        prev = curr;
    }
    return prev[maxWeight];
}