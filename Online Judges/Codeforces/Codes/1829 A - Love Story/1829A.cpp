#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, count;
    cin >> t;
    while (t--)
    {
        string s,c= "codeforces";
        cin >> s;
        count = 0;
        for (i = 0; i < 10; i++)
        {
            if (s[i] != c[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}