class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m{static_cast<int>(ssize(grid))};
        int n{static_cast<int>(ssize(grid[0]))};
        vector<pair<int, int>> directions{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        auto valid{[&](int row, int col) {
            return 0 <= row && row < m && 0 <= col && col < n && grid[row][col] == '1';
        }};
        vector<vector<bool>> seen(m, vector<bool>(n, false));

        int ans{0};
        auto dfs{[&, m, n](this auto&& self, int row, int col) -> void {
            for (const auto [y, x]: directions) {
                int nextRow{row + y}, nextCol{col + x};
                if (valid(nextRow, nextCol) && !seen[nextRow][nextCol]) {
                    seen[nextRow][nextCol] = true;
                    self(nextRow, nextCol);
                }
            }
        }};

        for (int row{0}; row < m; ++row)
            for (int col{0}; col < n; ++col)
                if (valid(row, col) && !seen[row][col]) {
                    ++ans;
                    seen[row][col] = true;
                    dfs(row, col);
                }

        return ans;
    }
};
