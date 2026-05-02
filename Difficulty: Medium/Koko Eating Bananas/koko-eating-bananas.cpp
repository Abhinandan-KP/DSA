class Solution {
  public:
         
    int calc(vector<int>&piles,int speed)
    {
        int total=0;
        for(int h:piles)
        {
            total+=ceil((double)h/speed);
        }
        return total;
    }
    
    int kokoEat(vector<int>& arr, int h) {
 
     int maxval=*max_element(arr.begin(),arr.end());
        int low=1,high=maxval,ans=maxval;
        while(low<=high)
        {
            int mid = low+(high-low) / 2;
            int total=calc(arr,mid);
            if(total<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
               low=mid+1; 
            }
        }
        return ans;
        
    }
};