// User function Template for C++

class Solution {
  public:
    int maximumPath(vector<vector<int>>& matrix) {
        // code here
             int n=matrix.size();
        int m=matrix[0].size();

        vector<int>dp(matrix[n-1]);

        for(int i=n-2;i>=0;i--)
        {    vector<int>curr(m,0);
            for(int j=0;j<m;j++)
            {
                int down=dp[j];
                int  downleft=j>0?dp[j-1]:-1e9;
                int downright=j<m-1?dp[j+1]:-1e9;

                curr[j]=matrix[i][j]+max({down,downleft,downright});
            }
            dp=curr;
        }
        return *max_element(dp.begin(),dp.end());
    }
};