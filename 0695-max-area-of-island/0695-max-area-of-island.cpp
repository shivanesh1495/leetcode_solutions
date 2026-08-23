class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ma = 0;
        int co = 0;
        for (int i = 0; i < n; i++) {
            
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == 1) {
                    co = 0;
                    DFS(co ,i, j, grid);
                    ma=max(ma, co);
                }
            }
        }
        return ma;
    }

private:
    int DFS(int &co, int r, int c, vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if (r < 0 || r >= n || c < 0 || c >= m) {
            return 0;
        }

        if (grid[r][c] == 0) {
            return co;
        }

        grid[r][c] = 0;
        co++;

        DFS(co,r - 1, c, grid); // up
        DFS(co,r + 1, c, grid); // down
        DFS(co,r, c - 1, grid); // left
        DFS(co,r, c + 1, grid); // right

        return co;
    }
};