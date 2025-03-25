#include <bits/stdc++.h> 

void reverse(string &s, int i, int j)
{
    if(i > j) return;
    swap(s[i], s[j]);
    reverse(s, i + 1, j - 1);
}

string reverseString(string str)
{
	reverse(str, 0, str.length() - 1);
	return str;
}