class Solution {
public:
    int cando(vector<int>&arr,int mid,int k)
    {
        int parts=1,cur=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(cur+arr[i]>mid)
            {
                parts++;
                cur=0;
            }
            cur+=arr[i];
        }
        return parts;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end()); 
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int partition=cando(nums,mid,k);
            if(partition>k)
            low=mid+1;
            else
            high=mid-1;
        }
        return low;
    }
};