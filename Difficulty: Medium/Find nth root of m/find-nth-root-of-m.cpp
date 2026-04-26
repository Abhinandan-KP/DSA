class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        if(m==0) return 0;
        int lo=1,hi=m;
        while(lo<=hi)
       {  int mid=lo+(hi-lo)/2;
       long long ans=1;
           for(int i=0;i<n;i++)
        {
             
             if(ans>m/mid)
             {ans=m+1;
                 break;} 
                 
             ans*=mid; 
        }
        
        if(ans==m)  return mid;
        if(ans>m)  hi=mid-1;
        else
        lo=mid+1;
       }
       return -1;
    }
};