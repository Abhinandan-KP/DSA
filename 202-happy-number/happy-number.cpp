class Solution {
public:
 int getnext(int n)
 { int a,tot=0;
      while(n>0)
      {
         a=n%10;
         tot+=a*a;
         n/=10;
      }
      return tot;
 }
    bool isHappy(int n) {
        unordered_set<int>mp;
        while(n!=1 && mp.find(n)==mp.end())
        {      
            mp.insert(n);
              n=getnext(n);
        }
        return n==1;
    }
};