#include <iostream>
using namespace std;

int main()
{
    string s;
    int word = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (word)
            {
                word=0;
                cout << " ";
            }
        }
        else
        {
            word = 1;
            cout << s[i];
        }
    }
    return 0;
}