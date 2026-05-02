class Solution {
  public:
    int countSquares(int n) {
        int cnt = 0;

        for(int i = 1; i * i < n; i++) {
            cnt++;
        }

        return cnt;
    }
};