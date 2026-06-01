class Solution {
  public:
    int countlessequal(vector<int>row,int mid)
    {
        return upper_bound(row.begin(),row.end(),mid)-row.begin();
    }
    int median(vector<vector<int>> &mat) {
        // code here
        int rows=mat.size();
        int cols=mat[0].size();
        int low = mat[0][0],high=mat[0][cols-1];
        
        for(int i=0;i<rows;i++)
        {
             low=min(low,mat[i][0]);
             high=max(high,mat[i][cols-1]);
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int count=0;
            for(int i=0;i<rows;i++)
            {
                count+=countlessequal(mat[i],mid);
            }
            if(count<(rows*cols+1)/2)
            low=mid+1;
            else
            high=mid-1;
        }
        return low;
    }
};
