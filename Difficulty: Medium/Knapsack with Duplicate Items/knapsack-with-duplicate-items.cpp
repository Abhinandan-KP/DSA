class Solution {
  public:
  int fun(int i,int w,vector<int>&val,vector<int>&wt,vector<vector<int>>&dp)
  {
       if(i==0)
        {
            return (w/wt[0])*val[0];
        }
        if(dp[i][w]!=-1)
        return dp[i][w];
        
        int nottaken=fun(i-1,w,val,wt,dp);
        int taken=0;
        if(wt[i]<=w)
        {
            taken=val[i]+fun(i,w-wt[i],val,wt,dp);
        }
        return dp[i][w]=max(taken,nottaken);
  }
    int knapSack(vector<int>& val, vector<int>& wt, int w) {
        // code here
               int n=wt.size();
       vector<vector<int>>dp(n,vector<int>(w+1,-1));
       return fun(n-1,w,val,wt,dp);
    }
};