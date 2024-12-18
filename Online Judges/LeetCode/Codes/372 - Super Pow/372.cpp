#include<bits/stdc++.h>
using namespace std;

const long long M = 1337;

long long mypow(long long x, long long n, long long M)
{
    long long ans = 1;
    while(n)
    {
        if(n&1)
            ans = (ans*x) % M;
        x = (x*x) % M;
        n >>= 1;
    }
    return ans;
}

long long get_b(vector<int>&v)
{
    long long num = 0;
    long long p = 1;
    for(int i=v.size()-1; i>=0; --i)
    {
        num += (v[i]*p)%1140;
        p = (p*10)%1140;
    }
    return num;
}

int superPow(int a, vector<int>& b) 
{
    long long power = get_b(b);
    return mypow(a,power,M);
}

int main()
{
    int a,x;
    cin>>a;
    vector<int>b;
    while(cin>>x)
        b.push_back(x);
    cout<<superPow(a,b)<<endl;
}