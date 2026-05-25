class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            int l = 0;
            int r = matrix[i].size() - 1;
            while (l <= r) {
                int m = l + (r - l) / 2;
                if (matrix[i][m] == target) {
                    return true;
                } else if (target > matrix[i][m]) {
                    l = m + 1;
                } else if (target < matrix[i][m]) {
                    r = m - 1;
                }
            }
        }
        return false;
    }
};
