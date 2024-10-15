#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, a, div, len, wid;
    cin >> n >> m >> a;
    div = n / a;
    if (n % a == 0)
        len = div * a;
    else
        len = (div + 1) * a;

    div = m / a;
    if (m % a == 0)
        wid = div * a;
    else
        wid = (div + 1) * a;

    div = (len * wid) / (a * a);

    cout << div;
}