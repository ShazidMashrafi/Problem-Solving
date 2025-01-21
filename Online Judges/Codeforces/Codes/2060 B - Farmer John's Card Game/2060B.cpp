#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include "Assets/debug.h"
#endif
#define int long long
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define rep(i,a,b)  for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>=b; --i)
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<vector<int>, int>> v;
    for(int i=0; i<n; ++i)
    {
        vector<int>temp;
        for(int j=0; j<m; ++j)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        sort(all(temp));
        v.push_back({temp,i+1});
    }
    sort(all(v));
    int prev = -1;
    for(int j=0; j<m; ++j)
    {
        for(int i=0; i<n; ++i)
        {
            if(prev>v[i].first[j])
            {
                cout<<-1<<endl;
                return;
            }
            prev = v[i].first[j];
        }
    }
    for(int i=0; i<n; ++i)
    {
        cout<<v[i].second << " ";
    }
    cout<<endl;
}

signed main()
{
    FAST;
    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
      // cout<<"Case "<<TC<<": ";
      solve();
    }
}