// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int  fun(int i,vector<int>&nums,vector<int>&dp)
   {
    if(i<0)return 0;
    if(i==0)
    return nums[0];
  if(dp[i]!=-1) return dp[i];
  
    int pick=nums[i]+fun(i-2,nums,dp);
    int nonpick=fun(i-1,nums,dp);
   dp[i]=max(pick,nonpick);
    return dp[i];
   }
    int findMaxSum(vector<int>& nums) {
          int n=nums.size();
        vector<int>dp(n,-1);
        return fun(n-1,nums,dp);
    }
};