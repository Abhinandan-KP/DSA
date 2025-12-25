class Solution {
public:
    int xyz(int day, int last,
            vector<vector<int>>& mat,
            vector<vector<int>>& dp)
    {
        if(dp[day][last] != -1)
            return dp[day][last];

        int m = mat[0].size();

        if(day == 0) {
            int best = 0;
            for(int i = 0; i < m; i++) {
                if(last == m || abs(i - last) <= 1)
                    best = max(best, mat[0][i]);
            }
            return dp[day][last] = best;
        }

        int best = 0;
        for(int i = 0; i < m; i++) {
            if(last == m || abs(i - last) <= 1) {
                int val = mat[day][i]
                          + xyz(day-1, i, mat, dp);
                best = max(best, val);
            }
        }

        return dp[day][last] = best;
    }

    int maximumPath(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> dp(n, vector<int>(m+1, -1));
        return xyz(n-1, m, mat, dp); 
    }
};
