class Solution {
  public:
    long subarrayXor(vector<int> &A, int k) {
        // code here
        unordered_map<int,int>p;
        int count=0;
        p[0]=1;
        int w=0;
        for(int q:A)
        {
            w^=q;
            int t = w^k;
            if(p.find(t)!=p.end())
            {
                count+=p[t];
                
            }
            p[w]++;
        }
        return count;
    }
};