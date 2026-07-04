class Solution {
  public:
    int divide(int dividend, int divisor) {
        // code here
        if(dividend==divisor) return 1;
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(divisor==1) return dividend;
        bool ispor=1;
        
       if(divisor<0 && dividend>=0)  ispor=0;
       else if(dividend<0 && divisor>0) ispor=0;
       
       long long n=dividend;
       long long d=divisor;
       n=abs(n);
       d=abs(d);
       long long ans=0;
       while(n>=d)
       {  int count=1;
         long long  temp=d;
           while(n>=(temp<<1))
           {
               temp<<=1;
               count<<=1;
           }
           n-=temp;
           ans+=count;
       }
       
       return ispor?ans:-ans;
    }
};