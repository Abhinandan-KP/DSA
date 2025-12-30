class Solution {
public:
  bool isMagicSquare(vector<vector<int>>& grid, int row, int col) {
        unordered_set<int> seen;

        for (int i = row; i < row + 3; i++) {
            for (int j = col; j < col + 3; j++) {
                int num = grid[i][j];
                if (num < 1 || num > 9 || seen.count(num))
                    return false;
                seen.insert(num);
            }
        }

        int diagonal1 = grid[row][col] + grid[row+1][col+1] + grid[row+2][col+2];
        int diagonal2 = grid[row][col+2] + grid[row+1][col+1] + grid[row+2][col];

        if (diagonal1 != diagonal2)
            return false;

        for (int i = 0; i < 3; i++) {
            int rowSum = grid[row+i][col] + grid[row+i][col+1] + grid[row+i][col+2];
            if (rowSum != diagonal1)
                return false;
        }

        for (int j = 0; j < 3; j++) {
            int colSum = grid[row][col+j] + grid[row+1][col+j] + grid[row+2][col+j];
            if (colSum != diagonal1)
                return false;
        }

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i <= m - 3; i++) {
            for (int j = 0; j <= n - 3; j++) {
                if (isMagicSquare(grid, i, j))
                    ans++;
            }
        }
        return ans;}
};