class Solution {
  public:
    int minCost(vector<int>& ht) {
        // Code here
        int n=ht.size();
         vector<int>dp(n,INT_MAX);
        dp[0]=0;
        int jump1=0;
         int jump2=INT_MAX;
        for(int i=1;i<n;i++)
        {   
            jump1=dp[i-1]+abs(ht[i]-ht[i-1]);
                   
       
            if(i>1)
           { jump2=dp[i-2]+abs(ht[i]-ht[i-2]);}
           
                       dp[i]=min(jump1,jump2);

        }
        
        return dp[n-1];
    
    }
};