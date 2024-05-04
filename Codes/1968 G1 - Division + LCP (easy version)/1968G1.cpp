#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

vector<int>Zfunc(string &str)
{
	int n=str.size();
	vector<int>z(n);
	int l=0,r=0;
	for(int i=1;i<n;i++)
    {
		if(i<=r)  z[i]=min(r-i+1,z[i-l]);
		while(i+z[i]<n&&str[z[i]]==str[i+z[i]])	z[i]++;
		if(i+z[i]-1>r)
        {
			l=i;
			r=i+z[i]-1;
		}
	}
	return z;
}

void solve()
{
    int n, k;
    string s;
    cin>> n >> k >> k >> s;
    vector<int>z = Zfunc(s);
    ll low = 1, high = n, ans = 0;
    while(low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll cnt = 1;
        for(int i = mid;i < n;)
        {
		    if(z[i] >= mid)
            {
			    cnt++;
			    i += mid;
		    }
            else i++;
	    }
        if(cnt >= k)
        {
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    cout<<ans<<endl;
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