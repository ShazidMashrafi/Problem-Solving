#include<bits/stdc++.h>
using namespace std;
using ll = long long;

unordered_map<char,int>symbols= {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string isBalanced(string s)
{
    stack<char>st;
    for(char bracket : s)
    {
        if(symbols[bracket]<0)
        {
            st.push(bracket);
        }
        else
        {
            if(st.empty()) return "NO";
            if(symbols[st.top()]+symbols[bracket]!=0) return "NO";
            st.pop();
        }
    }
    if(st.empty()) return "YES";
    else return "NO";
}

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
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