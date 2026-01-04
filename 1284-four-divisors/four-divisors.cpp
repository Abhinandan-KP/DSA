class Solution {
public:
    int sumFourDivisors(vector<int>& arr) {
        int a=arr.size();
        int sum=0;
        vector<vector<int>>ans(a);

        for(int j=0;j<a;j++)
        {
         for(int i=1;i*i<=arr[j];i++)
         {
            if(arr[j]%i==0)
            {
                ans[j].push_back(i);
                if(i!=arr[j]/i)
                {
                    ans[j].push_back(arr[j]/i);
                }
            }
         }

        if(ans[j].size()==4)
        {
         sum += accumulate(ans[j].begin(), ans[j].end(), 0);
        }

        }
      return sum;
    }
};