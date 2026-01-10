class Solution {
  public:
   int fun(int n,int m,vector<vector<int>>&ans)
    {    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)) );

        for(int j1=0;j1<m;j1++)
        {
            for(int j2=0;j2<m;j2++)
            {   if(j1==j2)
                dp[n-1][j1][j2]=ans[n-1][j1];
                else
                dp[n-1][j1][j2]=ans[n-1][j1]+ans[n-1][j2];
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j1=0;j1<m;j1++)
            {
                for(int j2=0;j2<m;j2++)
                {  int maxi=-1e9;
                   int curr=(j1==j2)?ans[i][j1]:ans[i][j1]+ans[i][j2];
                    for(int dj1=-1;dj1<=1;dj1++)
               {for(int dj2=-1;dj2<=1;dj2++)
                   { int newj1=j1+dj1;
                     int newj2=j2+dj2;
                      if(newj1>=0 && newj1<m && newj2>=0 && newj2<m)
                      {
                          maxi=max(maxi,curr+dp[i+1][newj1][newj2]);
                      }
                }
            }
            dp[i][j1][j2]=maxi;
        }
    }
        }
        return dp[0][0][m-1];
        
}
    int maxChocolate(vector<vector<int>>& arr) {
        // code here
        int n=arr.size();
     int m=arr[0].size();
      return fun(n,m,arr);
    }
};