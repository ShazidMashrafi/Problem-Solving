class Solution {
    private:
      bool canGo(vector<vector<int>> &mat, vector<vector<bool>>& vis, int x, int y, int n)
      {
          if(x < 0 || x >= n || y < 0 || y >= n || vis[x][y] || mat[x][y] == 0) return false;
          return true;
      }
      
      void solve(vector<vector<int>> &mat, vector<vector<bool>>& vis, string &path, vector<string>&ans, int x, int y, int n)
      {
          if(x == n - 1 && y == n - 1)
          {
              ans.push_back(path);
              return;
          }
          
          vis[x][y] = 1;
          
          int nx = x + 1, ny = y;
          if(canGo(mat, vis, nx, ny, n))
          {
              path.push_back('D');
              solve(mat, vis, path, ans, nx, ny, n);
              path.pop_back();
          }
          
          nx = x - 1, ny = y;
          if(canGo(mat, vis, nx, ny, n))
          {
              path.push_back('U');
              solve(mat, vis, path, ans, nx, ny, n);
              path.pop_back();
          }
          
          nx = x, ny = y + 1;
          if(canGo(mat, vis, nx, ny, n))
          {
              path.push_back('R');
              solve(mat, vis, path, ans, nx, ny, n);
              path.pop_back();
          }
          
          nx = x, ny = y - 1;
          if(canGo(mat, vis, nx, ny, n))
          {
              path.push_back('L');
              solve(mat, vis, path, ans, nx, ny, n);
              path.pop_back();
          }
          vis[x][y] = 0;
      }
      
      
    public:
      vector<string> findPath(vector<vector<int>> &mat) {
          int n = mat[0].size();
          vector<string>ans;
          vector<vector<bool>> vis(n, vector<bool>(n, 0));
          string path;
          solve(mat, vis, path, ans, 0, 0, n);
          sort(ans.begin(), ans.end());
          return ans;
      }
  };