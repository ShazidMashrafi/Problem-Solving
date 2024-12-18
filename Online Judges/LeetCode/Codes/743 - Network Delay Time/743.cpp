#include<bits/stdc++.h>
using namespace std;
#define ll 	long long

const int N = 1e5+10;
const int INF = 1e9+10;

int dijkstra(int source,int n, vector<pair<int,int>> g[])
{
    vector<int>vis(N,0);
    vector<int>dis(N,INF);

    set<pair<int,int>>st;
    st.insert({0,source});
    dis[source]=0;
    while(st.size())
    {
        auto node = *st.begin();
        int v =  node.second;
        int d = node.first;
        st.erase(st.begin());
        if(vis[v])  
            continue;
        vis[v] = 1;
        for(auto child : g[v])
        {
            int child_v =  child.first;
            int wt =  child.second;
            if(d + wt < dis[child_v])
            {
                dis[child_v] = d + wt;
                st.insert({dis[child_v],child_v});
            }
        }
    }
    int ans=0;
    for(int i=1; i<=n; ++i)
    {
        if(dis[i]==INF)
            return -1;
        ans=max(ans,dis[i]);
    }
    return ans;
}

int networkDelayTime(vector<vector<int>>& times, int n, int k) 
{
    vector<pair<int,int>> g[N];
    for(auto vec : times)
        g[vec[0]].push_back({vec[1],vec[2]});
    return dijkstra(k,n,g);
}