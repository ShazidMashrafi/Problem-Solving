#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;} 
void __print(long long x){cerr << x;}
void __print(unsigned x){cerr << x;} 
void __print(unsigned long x){cerr << x;} 
void __print(unsigned long long x){cerr << x;}
void __print(float x){cerr << x;} 
void __print(double x){cerr << x;} 
void __print(long double x){cerr << x;}
void __print(char x){cerr << x;} 
void __print(const char *x){cerr << x;} 
void __print(const string &x){cerr << x;}
void __print(bool x){cerr << (x ? "true" : "false");} 
void _print() { cerr << "\n"; }
template <typename A> void __print(const A &x); template <typename A, typename B> void __print(const pair<A, B> &p);
template <typename A> void __print(const A &x) {bool f=1; cerr << '['; for (const auto &i : x) {cerr << (f ? "" : ","), __print(i); f = 0;} cerr << ']';}
template <typename A, typename B> void __print(const pair<A, B> &p) {cerr << '('; __print(p.first); cerr << ','; __print(p.second); cerr << ')';}
template <typename Head, typename... Tail> void _print(const Head &H, const Tail &...T) { __print(H); if (sizeof...(T)) cerr << ", "; _print(T...);}
#define dbg(x...) cerr << #x << " : "; _print(x)