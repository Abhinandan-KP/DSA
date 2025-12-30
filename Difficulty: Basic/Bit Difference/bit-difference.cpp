class Solution {
  public:
    int countBitsFlip(int a, int b) {
      int xorResult = a ^ b;
    int count = 0;

    while (xorResult)
    {
        if (xorResult & 1)
        {
            count++;
        }
        xorResult >>= 1;
    }
    return count;
    }
};