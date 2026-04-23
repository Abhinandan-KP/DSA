class Solution {
  public:
    int lastoccurence(vector<int>& arr, int x)
    {
        int ans=-1;
        int low=0, high=arr.size()-1;
        while(low<=high)
        {
           int mid = low + (high - low)/2;
        if(arr[mid]==x)
        {
            ans = mid;
            low= mid + 1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else 
        low = mid + 1; }
        
        return ans;
    }
    
    int firstoccurence(vector<int>& arr, int x)
    {
        int ans=-1;
        int low=0,high=arr.size()-1;
       while(low<=high)
        {
            int mid = low + (high - low)/2;
        if(arr[mid]==x)
        {
            ans= mid;
            high =mid-1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
      low = mid + 1;}
      
       return ans;
    }
    int countFreq(vector<int>& arr, int x) {
        // code here
        int first = firstoccurence(arr,x);
        if(first==-1) return 0;
        int last = lastoccurence(arr,x);
        return last-first+1;
    }
};
