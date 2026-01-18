class Solution {
  public:
    int perfectSum(vector<int>& arr, int K) {
      vector<int> prev(K + 1, 0);
        prev[0] = 1;
        if (arr[0] <= K) prev[arr[0]] += 1;
        for (int i = 1; i < arr.size(); i++) {
            vector<int> curr(K + 1, 0);
            curr[0] = 1;
            for (int t = 0; t <= K; t++) {
                int notTake = prev[t];
                int take = 0;
                if (arr[i] <= t) {
                    take = prev[t - arr[i]];
                }
                curr[t] = take + notTake;
            }
            prev = curr;
        }
        return prev[K];
    }
};