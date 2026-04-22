class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int n=nums.size();
        int start=0,end=nums.size()-1;
        int ans=n;
        while(start<=end)
        {
            int mid=start + (end-start)/2;
            if(nums[mid]>=x)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};