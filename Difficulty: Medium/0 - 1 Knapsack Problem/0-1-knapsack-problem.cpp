class Solution {
  public:
    int fun(int i,int W,vector<int>&wt,vector<int>&val,vector<vector<int>>&dp)
    {
        if(i==0)
        {
            if(wt[0]<=W)
            return val[0];
            else
            return 0;
        }
        if(dp[i][W]!=-1)
        {
            return dp[i][W];
        }
        int nottake=0+fun(i-1,W,wt,val,dp);
        int take=-1e9;
        if(wt[i]<=W)
        {
             take=val[i]+fun(i-1,W-wt[i],wt,val,dp);
        }
        return dp[i][W]=max(take,nottake);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=wt.size();
        vector<vector<int>>dp(n,vector<int>(W+1,-1));
       return  fun(n-1,W,wt,val,dp);
    }
};