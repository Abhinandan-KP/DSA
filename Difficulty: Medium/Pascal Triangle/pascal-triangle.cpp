class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int rowIndex) {
        // code here
       rowIndex--;
         long long res=1;
      vector<int>ans;
        for(int i=0;i<=rowIndex;i++)
        {     ans.push_back(res);
           res=res*(rowIndex-i)/(i+1);
        
        }
        return ans;
    }
};
