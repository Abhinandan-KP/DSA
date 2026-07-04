class Solution {
public:
    int minBitFlips(int s, int g) {
        int a=s^g;
        int count=0;
        for(int i=0;i<32;i++)
        {
            count+=a&1;
             a=a>>1;
        }
        return count;
    }
};