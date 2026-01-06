class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        int negcou = 0;
        int minAbs = INT_MAX;
        long long sum = 0;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {

                int val = matrix[i][j];

                if (val < 0)
                    negcou++;

                sum += abs(val);
                minAbs = min(minAbs, abs(val));
            }
        }

        if (negcou % 2 == 1)
            sum -= 2LL * minAbs;

        return sum;
    }
};