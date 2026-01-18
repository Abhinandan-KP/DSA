class Solution {
public:
int mod=1e9+7;
    int findTargetSumWays(vector<int>& arr, int d ) {
        int n=arr.size();
        int totalsum = 0;
        for (auto& it : arr) totalsum += it;
 if (totalsum - d < 0 || (totalsum - d) % 2 != 0) return 0;
    int target = (totalsum - d) / 2;

 vector<int> prev(target + 1, 0);
  if (arr[0] == 0) prev[0] = 2; 
        else prev[0] = 1;             
if (arr[0] != 0 && arr[0] <= target) {
            prev[arr[0]] = 1;         
        }

    for (int i = 1; i < n; i++) {
            vector<int> curr(target + 1, 0);
            for (int k = 0; k <= target; k++) {
                int notTaken = prev[k];
                int taken = 0;
                if (arr[i] <= k) {
                    taken = prev[k - arr[i]];
                }
                curr[k] = (notTaken + taken) % mod;
            }
            prev = curr;
        }
        return prev[target];
    }
};