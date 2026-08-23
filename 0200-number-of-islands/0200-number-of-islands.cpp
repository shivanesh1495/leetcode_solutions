class Solution {
public:
    int numIslands(vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    DFS(i,j,grid);
                }
            }
        }
        return count;

    }

private:
    void DFS(int r, int c, vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        // Boundary check
        if (r < 0 || r >= n || c < 0 || c >= m)
            return;

        // If water, stop
        if (grid[r][c] == '0')
            return;

        // Mark visited
        grid[r][c] = '0';

        // 4 directions
        DFS(r - 1, c, grid); // up
        DFS(r + 1, c, grid); // down
        DFS(r, c - 1, grid); // left
        DFS(r, c + 1, grid); // right
    }
};