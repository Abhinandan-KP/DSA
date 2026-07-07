class Solution {
public:
    double myPow(double x, int n) {
        if(n<0) 
        {
            x=1/x;

           return  x*myPow(x,-1*(n+1));
        }
        if(n==0) return 1;
        if(n==1) return x;
       if(n%2==0)
       {
        return myPow(x*x,n/2);
       }
       return x*myPow(x,n-1);
    }
};
//Positive Range: 0 to 2,147,483,647Negative Range: -1 to -2,147,483,648Notice that there is no positive counterpart for -2,147,483,648$ inside a regular int. The positive side stops short by exactly 1.