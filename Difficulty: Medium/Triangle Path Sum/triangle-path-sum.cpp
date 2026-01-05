class Solution {
  public:
    
  
    int fun(int i,int j,vector<vector<int>>&triangle,int n,vector<vector<int>>&dp)
    {
         if(dp[i][j]!=-1)
         return dp[i][j];
         
         if(i==n-1)
         {
            return triangle[i][j];
         }
         int down=triangle[i][j]+fun(i+1,j,triangle,n,dp);
         int dig=triangle[i][j]+fun(i+1,j+1,triangle,n,dp);
         return dp[i][j]=min(down,dig);
    }
 int minPathSum(vector<vector<int>>& triangle) {
        int n=triangle.size();
        // int m=triangle[n-1].size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return fun(0,0,triangle,n,dp);
    }

    
};