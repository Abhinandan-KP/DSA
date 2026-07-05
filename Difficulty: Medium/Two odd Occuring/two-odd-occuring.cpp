class Solution {
  public:
    vector<int> twoOddNum(vector<int>& nums) {
        int n=nums.size();
            int  xorr=0;
             for(int i=0;i<n;i++)
             {
                    xorr=xorr^nums[i];
             }
             int   right=((unsigned int)xorr&((unsigned int)xorr-1))^xorr;
           int xor1=0,xor2=0;
             for(int i=0;i<n;i++)
             {
                if(nums[i]&right)
                xor1=xor1^nums[i];
                else
                xor2=xor2^nums[i];
             }
     if(xor1>xor2) return {xor1,xor2};
             
             return {xor2,xor1};
    }
};