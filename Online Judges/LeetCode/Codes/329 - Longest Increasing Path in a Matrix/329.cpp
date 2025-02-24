int solve(int row, int col, vector<vector<int>> &mat, vector<vector<int>>&dp)
{
    int n = mat.size();
    int m = mat[0].size();
    
    if(row < 0 || row >= n || col < 0 || col >= m) return 0;
    if(dp[row][col] != -1)  return dp[row][col];

    int nrow [] = {0, 0, -1, 1};
    int ncol [] = {1, -1, 0, 0};

    int ans = 1;

    for(int i = 0; i < 4; ++i)
    {
        int newrow = row + nrow[i];
        int newcol = col + ncol[i];

        if(newrow >= 0 && newrow < n && newcol >= 0 && newcol < m && mat[row][col] < mat[newrow][newcol])
            ans = max(ans, 1 + solve(newrow, newcol, mat, dp));
    }
    return dp[row][col] = ans;
}

int longestIncreasingPath(vector<vector<int>>& matrix) 
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>dp(n, vector<int> (m, -1));

    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
            ans = max(ans, solve(i, j, matrix, dp));
    }

    return ans;
}