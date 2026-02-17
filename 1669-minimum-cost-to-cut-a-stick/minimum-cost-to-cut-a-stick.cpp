class Solution {
public:
int solve(vector<int>& cuts, int i, int j, vector<vector<int>>& dp) {
        if (i > j) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        int minCost = INT_MAX;

        for (int k = i; k <= j; k++) {
            int cost1 = solve(cuts, i, k - 1, dp);
            int cost2 = solve(cuts, k + 1, j, dp);
            int cost = cuts[j + 1] - cuts[i - 1];
            int total = cost + cost1 + cost2;
            minCost = min(minCost, total);
        }

        return dp[i][j] = minCost;
    }

    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());

        int c = cuts.size();
        vector<vector<int>> dp(c, vector<int>(c, -1));

        return solve(cuts, 1, c - 2, dp);
    }
};