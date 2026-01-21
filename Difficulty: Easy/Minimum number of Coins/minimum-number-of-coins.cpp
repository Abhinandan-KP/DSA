class Solution {
  public:
    int findMin(int amt) {
        vector<int>coins={1,2,5,10};
        int a=coins.size();
        vector<int>prev(amt+1,1e9);
       for(int  target=0;target<=amt;target++)
       {
        if(target%coins[0]==0)
         prev[target]=target/coins[0];
       }
       for(int i=1;i<a;i++)
       {vector<int>curr(amt+1,1e9);
        for(int target=0;target<=amt;target++)
        {
           int nontake=prev[target];
           int take=1e9;
           if(coins[i]<=target)
           {
            take=1+curr[target-coins[i]];
           }
           curr[target]=min(take,nontake);
        }
        prev=curr;
       }
      
       if(prev[amt]<1e9)
       return prev[amt];;
       return -1;
    
    }
};