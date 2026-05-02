class Solution {
public:
 bool ispossible(vector<int>&bloom,int day ,int m,int k)
 {
    int count=0;
    int bouquet=0;
    for(int b:bloom)
    {
        if(b<=day)
        {
            count++;
            if(count==k)
            {
                bouquet++;
                count=0;
            }
           
        }
        else
            {
                count=0;
            }
    }
     return bouquet>=m;
 }
    int minDays(vector<int>& bloomDay, int m, int k) {
          long long totalflowers = 1LL * m * k;

        if (totalflowers > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while (low <= high)
        {
            int day = low + (high - low) / 2;

            if (ispossible(bloomDay, day, m, k))
            {
                ans = day;
                high = day - 1;
            }
            else
            {
                low = day + 1;
            }
        }

        return ans;
    }
};