class Solution {
public:
    int minBitFlips(int a, int b) {

         int XorResult = a ^ b;
    int count = 0;

    while (XorResult)
    {
        if (XorResult & 1)
        {
            count++;
        }
        XorResult >>= 1;
    }
    return count;
    }
};