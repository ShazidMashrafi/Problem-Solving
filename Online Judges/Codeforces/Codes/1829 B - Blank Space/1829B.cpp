#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, t, count, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        ans = 0;
        count = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                count++;
            }
            else
            {
                ans= max(count,ans);
                count= 0;
            }
        }
        cout << max(count,ans) << endl;
    }
}