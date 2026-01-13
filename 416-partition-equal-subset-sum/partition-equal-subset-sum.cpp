class Solution {
public:
    bool pun(int n,int k,vector<int>&arr,vector<vector<int>>&dp)
    {
        if(k==0)
        return 1;
        
        if(n==0)
        return arr[0]==k;
        
        if(dp[n][k]!=-1)
        return dp[n][k];
        
        int nontaken = pun(n-1,k,arr,dp);
        
        int taken=false;
        if(arr[n]<=k)
        {
         taken=pun(n-1,k-arr[n],arr,dp);   
        }
        
        return dp[n][k] = taken||nontaken;
    }
    bool canPartition(vector<int>& arr) {
         int n=arr.size();
      
       int totsum=0;
       for(int i=0;i<n;i++)
       {
          totsum+=arr[i]; 
       }
       
        if(totsum%2==1)
        return false;
        else
        {int k=totsum/2;
         vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return pun(n-1,k,arr,dp);}
    }
};