class Solution {
public:
     int func(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& grid)
  {   
      if(i==0 && j==0)
      return grid[0][0];
      
      if(i<0 || j<0)
      return INT_MAX;
      
      if(dp[i][j]!=-1)
      return dp[i][j];
      int uppath=func(i-1,j,dp,grid);
      int leftpath=func(i,j-1,dp,grid);
        int up=INT_MAX;
        int left=INT_MAX;
       
       if(uppath!=INT_MAX) 
      {up=grid[i][j]+ uppath;}
      if(leftpath!=INT_MAX)
      {left=grid[i][j]+leftpath;}
     
       return dp[i][j] = min(up,left);
      }
    int minPathSum(vector<vector<int>>& grid) {
           int m=grid.size();
       int n=grid[0].size();
      vector<vector<int>>dp(m,vector<int>(n,-1));
      return func(m-1,n-1,dp,grid);
    }
};