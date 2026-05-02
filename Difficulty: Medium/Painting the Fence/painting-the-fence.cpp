class Solution {
  public:
    int countWays(int n, int k) {
        if(n == 1) return k;
        if(n == 2) return k * k;

        int mod = 1e9 + 7;

        long long same = k;
        long long diff = (long long)k * (k - 1);
        long long total = same + diff;

        for(int i = 3; i <= n; i++) {
            same = diff;
            diff = (total * (k - 1)) % mod;
            total = (same + diff) % mod;
        }

        return total;
    }
};