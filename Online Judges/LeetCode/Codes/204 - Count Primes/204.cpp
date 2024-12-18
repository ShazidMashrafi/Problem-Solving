#include<bits/stdc++.h>
using namespace std;
#define ll 	long long

int countPrimes(int n) 
{
    vector<bool>isPrime(n+1,1);
    isPrime[0]=isPrime[1]=0;
    for(int i=2; i*i<n; ++i)
    {
        if(isPrime[i])
        {
            for(int j=2*i; j<n; j+=i)
                isPrime[j]=0;
        }
    }
    int ct=0;
    for(int i=2; i<n; ++i)
    {
        if(isPrime[i])
            ct++;
    }
    return ct;
}

int main()
{
    int n;
    cin>>n;
    cout<<countPrimes(n)<<endl;
}