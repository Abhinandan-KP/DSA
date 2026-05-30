class Solution {
  public:
  int nog(long double dist,vector<int>&arr)
  {
      int n=arr.size();
      int cnt=0;
      for(int i=1;i<n;i++)
      {
          int nib=(arr[i]-arr[i-1])/dist;
      
      if((arr[i]-arr[i-1])==(dist*nib))
      {
          nib--;
      }
      cnt+=nib;}
      return cnt;
  }
    long double minMaxDist(vector<int> &arr, int k) {
        int n=arr.size();
       long double low=0,high=0,cnt=0;
       for(int i=0;i<n-1;i++)
       {
           high=max(high,(long double)(arr[i+1]-arr[i]));
       }
       long double diff=1e-6;
       while(high-low>diff)
       {
           long double mid=(low+high)/2;
            cnt=nog(mid,arr);
           if(cnt>k) low=mid;
           else high=mid;
       }
       return high;
    }
};