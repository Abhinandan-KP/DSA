class Solution {
public:
    int integerReplacement(int q) {
        long long n=q;
        int count=0;
        if(n==1) return count;
        while(n>1)
        {  if(n%2==0)
           n/=2;
           else
           { if(n==3||(n&2)==0)
           n--;
           else
           n++;}

            count++;
        }
        return count;
    }
};