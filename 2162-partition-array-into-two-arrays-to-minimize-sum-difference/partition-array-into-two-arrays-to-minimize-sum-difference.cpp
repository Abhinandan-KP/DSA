class Solution {
public:
  
    void generateSums(int idx, int end, int currentSum, int count, vector<int>&nums,vector<vector<int>>& result) {
        if (idx == end) {
            result[count].push_back(currentSum);
            return;
        }
        generateSums(idx + 1, end, currentSum + nums[idx], count + 1, nums, result);
       
        generateSums(idx + 1, end, currentSum, count, nums, result);
    }

    int minimumDifference(vector<int>& nums) {
        int n = nums.size() / 2;
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>> leftSums(n + 1), rightSums(n + 1);
        generateSums(0, n, 0, 0, nums, leftSums);
        generateSums(n, 2 * n, 0, 0, nums, rightSums);
        for (auto& vec : rightSums) {
            sort(vec.begin(), vec.end());
        }
        
        int mini = INT_MAX;
        for (int k = 0; k <= n; ++k) {
            int neededFromRight = n - k;
            
            for (int s1 : leftSums[k]) {
                int target = (totalSum / 2) - s1;
                
                auto& rVec = rightSums[neededFromRight];
                auto it = lower_bound(rVec.begin(), rVec.end(), target);
              
                if (it != rVec.end()) {
                    int s2 = *it;
                    int sum1 = s1 + s2;
                    int sum2 = totalSum - sum1;
                    mini = min(mini, abs(sum1 - sum2));
                }
                
                if (it != rVec.begin()) {
                    int s2 = *prev(it);
                    int sum1 = s1 + s2;
                    int sum2 = totalSum - sum1;
                    mini = min(mini, abs(sum1 - sum2));
                }
            }
        }
        
        return mini;
    }
};