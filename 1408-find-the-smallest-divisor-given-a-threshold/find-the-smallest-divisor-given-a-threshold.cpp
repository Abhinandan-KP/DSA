class Solution {
public:
    int smallestDivisor(vector<int>& arr, int limit) {
        int n=arr.size();
        int maxi=*max_element(arr.begin(),arr.end());
        int low=1,high=maxi,ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<n;i++)
            {
              sum+=(arr[i]+mid-1)/mid;
            }
            if(sum<=limit) 
            {
                ans=mid;
                high=mid-1;
            }     
            else
           {
            low=mid+1;
           }
        }
        return low;
    }
};