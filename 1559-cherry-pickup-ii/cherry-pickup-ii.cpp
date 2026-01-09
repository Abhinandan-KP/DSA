class Solution {
public:
    int solve(int i,int j1,int j2,int n,int m,vector<vector<int>>&arr,vector<vector<vector<int>>>&dp)
    {
      
        
        if(j1<0 || j1>=m ||j2>=m || j2<0)
        return -1e9;

  if(dp[i][j1][j2]!=-1)
        return dp[i][j1][j2];

        if(i==n-1)
       {if(j1==j2)
        {return arr[i][j1];}
        else
        return arr[i][j1]+arr[i][j2];}

        int maxi=-1e9;
        
        int curr=(j1==j2)?arr[i][j1]:arr[i][j1]+arr[i][j2];

        for(int dj1=-1;dj1<=1;dj1++)
        {
            for(int dj2=-1;dj2<=1;dj2++)
            {
                int ans=curr + solve(i+1,j1+dj1,j2+dj2,n,m,arr,dp);
                maxi=max(maxi,ans);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return solve(0,0,m-1,n,m,arr,dp);
    }
};