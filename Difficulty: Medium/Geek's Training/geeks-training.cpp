class Solution {
  public:
    int xyz(int day, int last, vector<vector<int>>& points, vector<vector<int>>& dp)
    {
        if(dp[day][last] != -1) return dp[day][last];
        if(day == 0)
        {
            int maxi = 0;
            for(int i = 0; i < 3; i++) 
            {
                if(i != last)
                    maxi = max(points[0][i], maxi);
            }
            return dp[day][last] = maxi;
        }
        int maxi = 0;
        for(int i = 0; i < 3; i++)
        {
            if(i != last)
            {
                int activity = points[day][i] + xyz(day-1, i, points, dp); 
                maxi = max(maxi, activity);
            }
        }
        return dp[day][last] = maxi;
    }
    int maximumPoints(vector<vector<int>>& points) {
        int n = points.size(); 
        vector<vector<int>> dp(n, vector<int>(4, -1)); 
        return xyz(n-1, 3, points, dp);
    }
};
