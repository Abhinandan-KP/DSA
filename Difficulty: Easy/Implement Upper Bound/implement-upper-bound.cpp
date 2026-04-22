class Solution {
  public:
    int upperBound(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int start=0,end=n;
        int ans=n;
        while(start<=end)
        {
           int mid=start+(end-start)/2;
           if(arr[mid]>x)
           {   ans=mid;
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
