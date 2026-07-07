class Solution {
  public:
    vector<int> primeRange(int l, int r) {
        // code here
        vector<bool>isprime(r+1,true);
        if(r>=0) isprime[0]=false;
        if(r>=1) isprime[1]=false;
        
        for(int p=2;p*p<=r;p++)
         
         {
             if(isprime[p])
             {
                 for(int i=p*p;i<=r;i+=p)
                 {
                     isprime[i]=false;
                 }
             }
         }
         vector<int>result;
         for(int i=l;i<=r;i++)
         {
             if(isprime[i])
             {
                 result.push_back(i);
             }
         }
         return result;
    }
};