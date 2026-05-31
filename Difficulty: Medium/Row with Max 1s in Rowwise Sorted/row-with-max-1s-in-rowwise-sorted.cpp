class Solution {
  public:
    int lowerbound(vector<int>&arr,int n,int x)
    {
        int low=0,high=n-1;
        int ans=n;
         while(low<=high)
         {
            int mid=low+(high-low)/2;
            if(arr[mid]>=x)
            {ans=mid;
            high=mid-1;}
            else  low=mid+1;
         }
         return ans;
    }
    int rowWithMax1s(vector<vector<int>> &mat) {
        // code here
        int n=mat.size(),m=mat[0].size();
        int cnt_max=0,index=-1;
        for(int i=0;i<n;i++)
        {
            int cnt_ones=m-lowerbound(mat[i],m,1);
            if(cnt_ones>cnt_max)
            {
                cnt_max=cnt_ones;
                index=i;
            }
            
            }
            return index;
    }
};