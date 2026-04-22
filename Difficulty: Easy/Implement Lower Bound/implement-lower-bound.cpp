class Solution {
  public:
    int lowerBound(vector<int>& arr, int x) {
        // code here
        int start=0,end=arr.size()-1;
        int ans=arr.size();
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]>=x)
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
