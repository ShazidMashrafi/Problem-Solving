class Solution {
  public:
    bool dfs(int vertex,int parent, vector<int> g[],bool vis[])
    {
        vis[vertex]=1;
        bool loop = false;
        for(int child : g[vertex])
        {
            if(vis[child] && child == parent)
                continue;
            if(vis[child])   
                return true;
            loop |= dfs(child,vertex,g,vis);
        }
        return loop;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        bool vis[V+10] = {0};
        for(int i=0; i<V; ++i)
        {
            if(vis[i])  
                continue;
            if(dfs(i,-1,adj,vis))
                return true;
        }
        return false;
    }
};
