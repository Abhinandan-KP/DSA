class Solution {
  public:
    vector<int> primeFac(int n) {
        // code here
        set<int>bns;
        for(int i=2;i*i<=n;i++)
        {
            while(n%i==0) 
            {  
                bns.insert(i);
                n/=i;
            }
            
        }
        if (n > 1) {
            bns.insert(n);
        }
      
        return vector<int>(bns.begin(),bns.end());
    }
};