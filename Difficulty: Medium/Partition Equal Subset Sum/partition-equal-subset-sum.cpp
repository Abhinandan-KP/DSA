class Solution {
  public:
  bool pun(int i,int k,vector<int>&arr,vector<vector<int>>&dp)
   {
        if(k==0)
        return 1;
        if(i==0)
        return arr[0]==k;
        
        if(dp[i][k]!=-1)
        return dp[i][k];
        
        int nontaken= pun(i-1,k,arr,dp);
        int taken=0;
        if(arr[i]<=k)
        {
            taken= pun(i-1,k-arr[i],arr,dp);
        }
        return dp[i][k]=taken || nontaken;
   }
    bool equalPartition(vector<int>& arr) {
         int n=arr.size();
        int totsum=0;
        for(int i=0;i<n;i++)
        {
            totsum+=arr[i];
        }
        if(totsum%2==1)
        return 0;
        else
        {  int k=totsum/2;
           vector<vector<int>>dp(n,vector<int>(k+1,-1));
           return pun(n-1,k,arr,dp); 
        }
    }
};