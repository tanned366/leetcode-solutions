
class Solution {
public:
    int solve(vector<vector<int>>& triangle,
              vector<vector<int>>& dp,
              int row, int col) {

        int n = triangle.size();

        if (row == n - 1) {
            return triangle[row][col];
        }

        if (dp[row][col] != 1000000000) {
            return dp[row][col];
        }

        int down = solve(triangle, dp, row + 1, col);
        int diagonal = solve(triangle, dp, row + 1, col + 1);

        dp[row][col] = triangle[row][col] + min(down, diagonal);

        return dp[row][col];
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        vector<vector<int>> dp(
            n, vector<int>(n, 1000000000)
        );

        return solve(triangle, dp, 0, 0);
    }
};
