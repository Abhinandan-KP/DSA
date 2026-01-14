class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size() / 2;
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        vector<vector<int>> leftSums(n + 1), rightSums(n + 1);
        for (int mask = 0; mask < (1 << n); mask++) {
            int sum = 0, cnt = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    sum += nums[i];
                    cnt++;
                }
            }
            leftSums[cnt].push_back(sum);
        }
        for (int mask = 0; mask < (1 << n); mask++) {
            int sum = 0, cnt = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    sum += nums[i + n];
                    cnt++;
                }
            }
            rightSums[cnt].push_back(sum);
        }

        for (auto &v : rightSums)
            sort(v.begin(), v.end());

        int mini = INT_MAX;
        for (int k = 0; k <= n; k++) {
            int need = n - k;
            auto &rVec = rightSums[need];

            for (int s1 : leftSums[k]) {
                int target = totalSum / 2 - s1;
                auto it = lower_bound(rVec.begin(), rVec.end(), target);

                if (it != rVec.end())
                    mini = min(mini, abs(totalSum - 2 * (s1 + *it)));

                if (it != rVec.begin()) {
                    --it;
                    mini = min(mini, abs(totalSum - 2 * (s1 + *it)));
                }
            }
        }

        return mini;
    }
};
