class Solution {
public:
int n;
    vector<vector<int>> dp;

    int dfs(vector<vector<int>>& triangle, int i, int j) {
        // Base case
        if (i == n - 1) return triangle[i][j];

        // Already visited
        if (dp[i][j] != INT_MAX) return dp[i][j];

        //options
        int down = dfs(triangle, i + 1, j);
        int diag = dfs(triangle, i + 1, j + 1);

        return dp[i][j] = triangle[i][j] + min(down, diag);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        n = triangle.size();
        dp.assign(n, vector<int>(n, INT_MAX));
        return dfs(triangle, 0, 0);
    }
};