// User function Template for C++

class Solution {
  public:
  int fun(int i,int n,vector<int>&price,vector<vector<int>>&dp)
  {
      if(i==0)
      return price[0]*n;
      
       if(dp[i][n]!=-1)
       return dp[i][n];
       
      int nottake=fun(i-1,n,price,dp);
      int take=0;
      if(i+1<=n)
      {
           take=price[i]+fun(i,n-(i+1),price,dp);
      }
      return dp[i][n]=max(take,nottake);
  }
    int cutRod(vector<int> &price) {
        // code here
        int n=price.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return fun(n-1,n,price,dp);
    }
};