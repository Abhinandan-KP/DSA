class Solution {
public:
  int helper(const vector<int>& arr, int k, int start, vector<int>& memo) {
        int n = (int)arr.size();

        if (start == n) return 0;

        if (memo[start] != -1) return memo[start];

        int maxSum = 0;    
        int maxElem = 0;   

        for (int length = 1; length <= k && start + length <= n; length++) {
            maxElem = max(maxElem, arr[start + length - 1]);

            int currentSum = maxElem * length + helper(arr, k, start + length, memo);

            maxSum = max(maxSum, currentSum);
        }

        return memo[start] = maxSum;
    }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
              int n = (int)arr.size();

        vector<int> memo(n, -1);

        return helper(arr, k, 0, memo);
    }
};