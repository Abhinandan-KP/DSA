class Solution {
public:
   long long power(long long base,long long exp)
   {
    long long res=1;
    long long MOD=1e9+7;
    base=base%MOD;
    while(exp)
    {
        if(exp%2==1) res=(res*base)%MOD;
        base=(base*base)%MOD;
        exp/=2;
    }
    return res;
   }
    int countGoodNumbers(long long n) {
        long long   MOD=1e9+7;
        long long evenslots=(n+1)/2;
        long long oddslots=n/2;
        long long totaleven=power(5,evenslots);
        long long totalodd=power(4,oddslots);
        return (totaleven*totalodd)%MOD;
    }
};