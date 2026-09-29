class Solution {
public:
int find(vector<int> nums,int target,bool isfirst)
    { int n=nums.size();
        int low=0,high=n-1,ans=-1;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                if(isfirst)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
          }
          return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first= find(nums,target,true);
        int last= find(nums,target,false);
        return {first,last};
    }
};