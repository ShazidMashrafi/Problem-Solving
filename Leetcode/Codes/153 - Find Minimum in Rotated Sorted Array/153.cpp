#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> &v)
{
    int l=0, r= v.size()-1;
    int ans=v[0];
    while(l<=r)
    {
        if(v[l]<=v[r])
            return min(ans,v[l]);
        int m = l + (r-l)/2;
        ans = min(ans,v[m]);
        if(v[m]>= v[l])
            l = m+1;
        else
            r = m -1;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v)  cin>>x;
    int min = findMin(v);
    cout<<min<<endl;
}