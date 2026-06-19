class Solution {
public:
 long long power(long long val,long long exp)
 {   long long MOD=1e9+7;
    long long res=1;
    val=val%MOD;
     while(exp)
     {
           if(exp%2==1) res=(res*val)%MOD;
           val=(val*val)%MOD;
           exp/=2;
     }
     return res;
 }
    int countGoodNumbers(long long n) {
        long long MOD=1e9+7;
        
        long long evenslots = power(5,(n+1)/2);
        long long oddslots =power(4,n/2);
        return (evenslots*oddslots)%MOD;
    }
};