class Solution {
  public:
    int getFirstSetBit(int n) {
        int pos = 1;

        while(n > 0) {
            if(n & 1) {
                return pos;
            }
            n = n >> 1;
            pos++;
        }

        return 0;
    }
};