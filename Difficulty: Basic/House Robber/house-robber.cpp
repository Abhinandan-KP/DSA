class Solution {
  public:
    int maximizeMoney(int N, int K) {
        int houses = (N + 1) / 2;  
        return houses * K;
    }
};
