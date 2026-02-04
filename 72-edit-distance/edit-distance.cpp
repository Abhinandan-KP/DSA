class Solution {
public:
 int fun(string &s1,string &s2,int i,int j,vector<vector<int>>&dp)
 {
      if(i==0) return j;
      if(j==0) return i;

      if(dp[i-1][j-1]!=-1)
      return dp[i-1][j-1];

      if(s1[i-1]==s2[j-1])
      return dp[i-1][j-1]=0+fun(s1,s2,i-1,j-1,dp);
      else
      return dp[i-1][j-1]=1+min(fun(s1,s2,i-1,j-1,dp),min(fun(s1,s2,i-1,j,dp),fun(s1,s2,i,j-1,dp)));
 }
    int minDistance(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return fun(s1,s2,n,m,dp);
    }
};