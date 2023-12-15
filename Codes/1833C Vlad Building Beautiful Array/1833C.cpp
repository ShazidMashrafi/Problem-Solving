#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, min_even = 0, min_odd = 0, odd_count = 0, even_count = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                odd_count++;
                if (odd_count == n)
                    break;
                if (min_odd == 0 || min_odd > a[i])
                {
                    min_odd = a[i];
                }
            }
            else
            {
                even_count++;
                if (even_count == n)
                    break;
                if (min_even == 0 || min_even > a[i])
                {
                    min_even = a[i];
                }
            }
        }
        if (odd_count == n || even_count == n || min_even > min_odd)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}