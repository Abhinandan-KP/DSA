class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int n=nums.size();
        double winsum=0;
        for(int i=0;i<k;i++)
        {
            winsum+=nums[i];
        }
        double maxsum=winsum;
        for(int i=k;i<n;i++)
        {
            winsum+=nums[i]-nums[i-k];
            maxsum=max(winsum,maxsum);
        }
        return maxsum/k;
    }
};