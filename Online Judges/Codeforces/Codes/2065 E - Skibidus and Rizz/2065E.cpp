#include <bits/stdc++.h>
using namespace std;
#define  int  long long
#define  ll  long long
#define  endl  '\n'
#define  ff  first
#define  ss  second
#define  ins  insert
#define  pb  push_back
#define  ppb  pop_back
#define  sz(x)  (int)(x).size()
#define  all(x)  x.begin(), x.end()
#define  rep(i,a,b)  for(int i=a; i<b; ++i)
#define  rrep(i,a,b) for(int i=a; i>=b; --i)
#define  yn(f)  f? cout<<"YES\n":cout<<"NO\n"
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll pow(ll x,ll y,ll m=1e9+7) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    if(abs(n-m)>k || (n<k && m<k))
    {
        cout << -1 << endl;
        return;
    }
    int x = n / k;
    int y = m / k;
    int ex = n % k;
    int ey = m % k;
    int mx = max(x,y);
    int mn = min(x,y);
    if(mx > mn + 1 || mn < mx - 1)
    {
        cout << -1 << endl;
        return;
    }
    int mxe = max(ex, ey);
    int mne = min(ex, ey);
    if(x>y)
    {
        int temp_mx = x;
        if(ey == 0 && ex)
        {
            cout << -1 << endl;
            return;
        }
        for(int i=0; i<mn; ++i)
        {
            temp_mx--;
            string s1(k, '0');
            string s2(k, '1');
            cout << s1 << s2;
        }
        string s1(k, '0');
        cout << s1;

        while(ex && ey)
        {
            cout << 1 << 0;
            ex--;
            ey--;
        }
        while(ex--)cout << 0;
        while(ey--)cout << 1;
        cout << endl;

    }
    else if(x==y)
    {
        for(int i=0; i<mn; ++i)
        {
            if(ex>ey)
            {
                string s1(k, '0');
                string s2(k, '1');
                cout << s1 << s2;
            }
            else
            {
                string s1(k, '1');
                string s2(k, '0');
                cout << s1 << s2;
            }
            
        }
        if(ex>ey)
        {
            while(ex && ey)
            {
                cout << 0<<1;
                ex--;
                ey--;
            }
        }
        else
        {
            while(ex && ey)
            {
                cout << 1<<0;
                ex--;
                ey--;
            }
        }
        while(ex--)cout << 0;
        while(ey--)cout << 1;
        cout << endl;
    }
    else
    {
        if(ex == 0 && ey)
        {
            cout << -1 << endl;
            return;
        }
        for(int i=0; i<mn; ++i)
        {
            string s1(k, '1');
            string s2(k, '0');
            cout << s1 << s2;
        }
        string s1(k, '1');
        cout << s1;

        
        while(ex && ey)
        {
            cout << 0<<1;
            ex--;
            ey--;
        }
        while(ex--)cout << 0;
        while(ey--)cout << 1;
        cout << endl;
    }
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