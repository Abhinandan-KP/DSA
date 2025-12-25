class Solution {
public:
int xyz(int day,int last,vector<vector<int>>&points,vector<vector<int>>&dp)
{
    if(dp[day][last]!=-1) return dp[day][last];
    
  
    if(day==0)
    { int maxi=1e9;
      for(int i=0;i<points[0].size();i++)
      {
          if(i!=last)
          maxi=min(points[0][i],maxi);
      }
      return dp[day][last]=maxi;
    }
    
    int maxi=1e9;
     for(int i=0;i<points[0].size();i++)
     {
        if(i!=last)
        {
            int activity=points[day][i]+xyz(day-1,i,points,dp);
            maxi=min(maxi,activity);
        }
     }
     return dp[day][last]=maxi;
}
    int minFallingPathSum(vector<vector<int>>& points) {
        int n=points.size();
        int m=points[0].size();
        vector<vector<int>>dp(n,vector<int>(m+1,-1));    
 return xyz(n-1,m,points,dp);
    }
};