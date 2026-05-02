class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        while(n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }

    int power(int base, int exp) {
        int result = 1;
        while(exp > 0) {
            if(exp % 2 == 1)
                result *= base;
            base *= base;
            exp /= 2;
        }
        return result;
    }

    int reverseExponentiation(int n) {
        int rev = reverse(n);
        return power(n, rev);
    }
};