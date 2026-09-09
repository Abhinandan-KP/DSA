class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            int corind=nums[i]-1;
            if(nums[i]!=nums[corind])
            {
                swap(nums[i],nums[corind]);
            }
            else
            {
                if(i!=corind)
                {
                    return nums[i];
                   
                }
                 i++;
            }
             
        }
        return -1;
    }
};