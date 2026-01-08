class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
          int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            dp[n-1][i]=matrix[n-1][i];
        }
        for(int row=n-2;row>=0;row--)
        {
            for(int col=m-1;col>=0;col--)
            {
                int down=dp[row+1][col];
                int downleft=(col> 0)?dp[row+1][col-1]:1e9;
                int downright=(col<m-1)?dp[row+1][col+1]:1e9;
                
                dp[row][col]=matrix[row][col]+min({down,downright,downleft});
            }
        }
        
        int minsum= *min_element(dp[0].begin(),dp[0].end());
        return minsum;
    }
};