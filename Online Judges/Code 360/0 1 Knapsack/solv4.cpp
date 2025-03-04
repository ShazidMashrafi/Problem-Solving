#include <bits/stdc++.h>
using namespace std;
#define ll long long
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    vector<ll> v(maxWeight + 1, 0);
    if (weight[0] <= maxWeight)
    {
        for (int w = weight[0]; w <= maxWeight; ++w)
            v[w] = value[0];
    }
    for (int index = 1; index < n; ++index)
    {
        for (int w = maxWeight; w >= 0; --w)
        {
            ll include = 0;
            if (weight[index] <= w)
                include = value[index] + v[w - weight[index]];
            ll exclude = v[w];
            v[w] = max(include, exclude);
        }
    }
    return v[maxWeight];
}