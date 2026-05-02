class Solution {
  public:
    int inSequence(int a, int b, int c) {
        if(c == 0) {
            return a == b;
        }

        int diff = b - a;

        if(diff % c == 0 && diff / c >= 0) {
            return 1;
        }

        return 0;
    }
};