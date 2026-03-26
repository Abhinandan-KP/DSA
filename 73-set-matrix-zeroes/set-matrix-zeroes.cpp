class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();


        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]==0)
                {
                    for(int col=0;col<n;col++)
                    {
                        if (arr[i][col] != 0)
                        arr[i][col]='a';
                    }
                    for(int row=0;row<m;row++)
                    {
          if (arr[row][j] != 0)

                        arr[row][j]='a';
                    }
                }
            }
        }
      
      for(int i=0;i<m;i++)
      {
    for(int j=0;j<n;j++)
    {
        if(arr[i][j]=='a')
        arr[i][j]=0;
    }
      }

    }
};