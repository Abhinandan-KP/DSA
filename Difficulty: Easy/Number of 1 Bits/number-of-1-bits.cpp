class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
         int count;
        while(n)
        {
            n=n&(n-1);
            count++;
        }
        return count;
    }
};