class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int size = n * m;
        const int MOD = 12345;

        vector<int> flat;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                flat.push_back(grid[i][j] % MOD);
            }
        }

        vector<int> prefix(size, 1);
        for(int i = 1; i < size; i++){
            prefix[i] = (prefix[i-1] * flat[i-1]) % MOD;
        }

        vector<int> suffix(size, 1);
        for(int i = size-2; i >= 0; i--){
            suffix[i] = (suffix[i+1] * flat[i+1]) % MOD;
        }

        // Step 4: build answer
        vector<vector<int>> ans(n, vector<int>(m));

        for(int i = 0; i < size; i++){
            int val = (prefix[i] * suffix[i]) % MOD;
            ans[i/m][i%m] = val;
        }

        return ans;
    }
};