#include <bits/stdc++.h>

bool check(string s, int i, int j)
{
    if(i > j)   return true;
    if(s[i] != s[j])    return false;
    return check(s, i + 1, j - 1);
}

bool checkPalindrome(long long N)
{
	string bin = bitset<64>(N).to_string();  
    bin.erase(0, bin.find_first_not_of('0'));
    if(bin.empty()) bin = "0";
    return check(bin, 0, bin.size() - 1);
}