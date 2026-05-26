class Solution {
public:
int daysneeded(vector<int>&weight,int capacity)
{
     int days=1;
     int currentload=0;
     for(int w:weight)
     {
        if(currentload+w>capacity)
        {
            days++;
            currentload=w;
        }
        else
        currentload+=w;

     }
       return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=accumulate(weights.begin(),weights.end(),0);
        while(left<right)
        {
            int mid=left+(right-left)/2;
            int needed=daysneeded(weights,mid);
            if(needed<=days)
            {
               right=mid;
            }
            else
            left=mid+1;
        }
        return right;
    }
};