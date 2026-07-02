class Solution {
  public:
    bool checkKthBit(int n, int i) {
        //  code here
        return (n&(1<<i))!=0;
    }
};