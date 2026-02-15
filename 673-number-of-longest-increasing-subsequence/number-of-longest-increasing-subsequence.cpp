class Solution{
public:
int findNumberOfLIS(vector<int>&nums){
int n=nums.size();
if(n==0)return 0;
vector<int>dp(n,1),ct(n,1);
int maxi=1;
for(int i=0;i<n;i++){
for(int j=0;j<i;j++){
if(nums[j]<nums[i]){
if(dp[j]+1>dp[i]){
dp[i]=dp[j]+1;
ct[i]=ct[j];
   }
else if(dp[j]+1==dp[i])ct[i]+=ct[j];
    }
}
maxi=max(maxi,dp[i]);
}
int ans=0;
for(int i=0;i<n;i++)
if(dp[i]==maxi)ans+=ct[i];
return ans;
}
};
