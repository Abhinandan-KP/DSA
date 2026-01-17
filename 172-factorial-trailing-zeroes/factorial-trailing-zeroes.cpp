class Solution {
public:
    int trailingZeroes(int n) {
        long long a=0;
        for(long long i=5;i<=n;i*=5)
        {
            a=a+n/i;
        }
        return a;
    }
};