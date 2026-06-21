class Solution {
  public:
   int fun(int ind,int sum,vector<int>&nums,vector<vector<int>>&dp)
 {
    if(sum==0) return 1;
    if(sum<0||ind==nums.size()) return 0;
    if(dp[ind][sum]!=-1) return dp[ind][sum];
     
    return dp[ind][sum]=(fun(ind+1,sum-nums[ind],nums,dp)|fun(ind+1,sum,nums,dp));
 }
    bool checkSubsequenceSum(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
              return fun(0,k,arr,dp);
    }
};