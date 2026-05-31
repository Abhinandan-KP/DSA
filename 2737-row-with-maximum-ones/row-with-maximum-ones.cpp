class Solution {
public:
  
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int cnt_max=0,index=0;
        
        for(int i=0;i<n;i++)
        {  int cnt_ones=0;
             for(int val:mat[i])
             {
                cnt_ones+=val;
             }
            if(cnt_ones>cnt_max)
            {
                cnt_max=cnt_ones;
                index=i;
            }
            if(cnt_ones==m)
            break;
        }
        return {index,cnt_max};
    }
};