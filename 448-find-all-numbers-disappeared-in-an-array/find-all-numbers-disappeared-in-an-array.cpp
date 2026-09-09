class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n)
        {
            int corind=nums[i]-1;
            if(nums[i]!=nums[corind])
            {
                swap(nums[i],nums[corind]);
            }
            else
            i++;
        }
        vector<int>ans;
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=j+1)
            {
                ans.push_back(j+1);
            }
        }
        return ans;
    }
};