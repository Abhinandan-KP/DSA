
class Solution {
public:
bool isallstars(string &s1,int i)
{
    for(int j=0;j<=i;j++)
    {
        if(s1[j]!='*')
        return 0;
    }
    return 1;
}
    bool wildcardMatchingUtil(string &S1, string &S2, int i, int j, vector<vector<int>> &dp) {
        if(i<0 && j<0)
        return true;
        if(i<0 && j>=0)
        return false;
        if(i>=0 && j<0)
        return isallstars(S1,i);
        
        if (dp[i][j] != -1)
            return dp[i][j];

        if(S1[i]==S2[j]||S1[i]=='?')
return dp[i][j] = wildcardMatchingUtil(S1, S2, i - 1, j - 1, dp);
         if (S1[i] == '*')
        return dp[i][j] = wildcardMatchingUtil(S1, S2, i - 1, j, dp) ||
    wildcardMatchingUtil(S1, S2, i, j - 1, dp);

      return dp[i][j] = false;


    }
    
    bool isMatch(string s, string p) {
         int n = p.size();
        int m = s.size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    return wildcardMatchingUtil(p, s, n - 1, m - 1, dp);
    }
};