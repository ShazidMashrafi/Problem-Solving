#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>subsets (vector<int> &nums)
{
    int n=nums.size();
    int m=(1<<n);
    vector<vector<int>>subsets;
    for(int i=0; i<m; ++i)
    {
        vector<int>subset;
        for(int j=0; j<n; ++j)
            if (i & (1<<j))
                subset.push_back(nums[j]);
        subsets.push_back(subset);
    }
    return subsets;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v)  cin>>x;
    auto all_subsets = subsets(v);
    for(auto subset : all_subsets)
    {    
        for(auto ele:subset)
            cout<<ele<<" ";
        cout<<endl;
    }
}