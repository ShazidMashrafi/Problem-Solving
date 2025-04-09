#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, k, count=0;
    cin >> n >> k;
    int s[n];
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for(i=0;i<n;i++)
    {
        if (s[i] > 0 && s[i]>=s[k-1])
        {
            count++;
        }
    }
    cout << count;
}