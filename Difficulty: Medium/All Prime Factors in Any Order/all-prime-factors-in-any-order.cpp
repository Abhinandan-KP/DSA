class Solution {
  public:
    vector<int> primeFactors(int p) {
        // code here
        vector<int>ans;
        int n=p;
        if(n<=1) return {};
        
         while(n%2==0)
            { ans.push_back(2);
               n/=2; 
            }
        
        for(int i=3;i*i<=n;i+=2)
        {
            while(n%i==0)
            { ans.push_back(i);
                n/=i;
            }
        }
        if(n>1)
        {
            ans.push_back(n);
        }
        return ans;
    }
};
