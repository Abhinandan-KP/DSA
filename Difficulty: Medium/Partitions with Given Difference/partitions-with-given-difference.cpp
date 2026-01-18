class Solution {
    int mod = 1e9 + 7;
  public:
 int fun(int n,int k,vector<int>&arr,vector<vector<int>>&dp)
{
      if(n==0)
    {
        if(k==0 && arr[0]==0)
        return 2;
        if(k==0 || k==arr[0])
        return 1;

        return 0;
    }
    
    if(dp[n][k]!=-1) return dp[n][k];
    
    int  nontaken=fun(n-1,k,arr,dp);
    
    int taken=0;
    if(arr[n]<=k)
    {
        taken=fun(n-1,k-arr[n],arr,dp);
    }
    return dp[n][k]=(taken+nontaken);
}
    int countPartitions(vector<int>& arr, int k) {
        int n=arr.size();
     int totalsum=0;
     for(auto&it : arr) totalsum+=it;
     
     if(totalsum-k<0 || (totalsum-k)%2!=0) return 0;
     int s = (totalsum - k) / 2;
                 vector<vector<int>>dp(n,vector<int>(s+1,-1));

     return fun(n-1,s,arr,dp);
    }
};
