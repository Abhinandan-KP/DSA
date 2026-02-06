class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=INT_MIN,minprice=INT_MAX,profit=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
          if(prices[i]<minprice)
          minprice=prices[i];
      
      profit=prices[i]-minprice;

      if(profit>maxprofit)
       maxprofit=profit;
        }
        return maxprofit;
    }
};