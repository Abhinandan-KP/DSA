class Solution {
public:
    vector<int> getRow(int rowIndex) {
       long long res=1;
      vector<int>ans;
        for(int i=0;i<=rowIndex;i++)
        {     ans.push_back(res);
           res=res*(rowIndex-i)/(i+1);
        
        }
        return ans;
    }
};