class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        long long res=1;
        if(r>n) return 0;
        if(r>n-r)
        r=n-r;
        
        for(int i=0;i<r;i++)
        {
            res*=(n-i);
            res/=(i+1);
        }
        return (int)res;
    }
};