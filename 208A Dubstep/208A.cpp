#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    string s, words;
    cin >> s;
    int i = 0;
    while (i < s.size())
    {
        if (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 3;
        }
        else
        {
            if (!words.empty())
                words += ' ';
            
            while (i < s.size())
            {
                if (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
                    break;
                else
                {
                    words += s[i];
                    i++;
                }
            }
        }
    }
    cout << words << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    //cin >> TC;
    //cin.ignore();
    while (TC--) solve();
}