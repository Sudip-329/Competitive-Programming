class Solution {
public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(k + 1, -1));

        dp[0][k] = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int curr = grid[i][j];
                vector<int> combined(k + 1, -1);
                for (int rk = 0; rk <= k; rk++) {
                    combined[rk] = max(combined[rk], dp[j][rk]);
                }

                if (j > 0) {
                    for (int rk = 0; rk <= k; rk++) {
                        combined[rk] = max(combined[rk], dp[j - 1][rk]);
                    }
                }
                if (curr != 0) {
                    fill(dp[j].begin(), dp[j].end(), -1);
                    for (int rk = 1; rk <= k; rk++) {
                        if (combined[rk] != -1) {
                            dp[j][rk - 1] = combined[rk] + curr;
                        }
                    }
                } else {
                    dp[j] = combined;
                }
            }
        }
        int max_val = -1;
        for (int rk = 0; rk <= k; rk++) {
            max_val = max(max_val, dp[n - 1][rk]);
        }
        return max_val;
    }
};
