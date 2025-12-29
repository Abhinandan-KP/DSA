class Solution {
public:
    int uniquePaths(int m, int n) {
        long long res = 1;
        int N = n + m - 2;
        int r = min(n - 1, m - 1);

        for (int i = 1; i <= r; i++) {
            res = res * (N - r + i) / i;
        }

        return (int)res;
    }
};