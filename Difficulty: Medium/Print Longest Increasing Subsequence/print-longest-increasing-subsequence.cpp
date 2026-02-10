class Solution {
  public:
    vector<int> getLIS(vector<int>& nums) {
    
        int n=nums.size();
      
        vector<int>dp(n,1);
        vector<int>prev(n,-1);
        int maxLen=0,maxindex=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i] && dp[j]+1>dp[i])
                {
                    dp[i]=dp[j]+1;
                    prev[i]=j;
                }
            }
             if (dp[i] > maxLen) {
            maxLen = dp[i];
            maxindex=i;
        }
        }
      vector<int> lisSeq;
      
        int curr = maxindex;
        while (curr != -1) {
            lisSeq.push_back(nums[curr]);
            curr = prev[curr];
        }
        
        reverse(lisSeq.begin(), lisSeq.end());

        return lisSeq;
        
    }
};