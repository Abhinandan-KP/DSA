class Solution {
public:
    long long maxProductOfThree(vector<int>& arr) {
        long long max1 = LLONG_MIN, max2 = LLONG_MIN, max3 = LLONG_MIN;
        long long min1 = LLONG_MAX, min2 = LLONG_MAX;

for (int num : arr) {
long long x = num;

if (x > max1) {
    max3 = max2;
    max2 = max1;
    max1 = x;
            }
else if (x > max2) {
    max3 = max2;
    max2 = x;
            }
else if (x > max3) {
max3 = x;
            }

if (x < min1) {
min2 = min1;
    min1 = x;
            }
else if (x < min2) {
 min2 = x;
            }
        }

long long prod1 = max1 * max2 * max3;
long long prod2 = min1 * min2 * max1;

return max(prod1, prod2);
    }

    int maximumProduct(vector<int>& nums) {
        return maxProductOfThree(nums);
    }
};