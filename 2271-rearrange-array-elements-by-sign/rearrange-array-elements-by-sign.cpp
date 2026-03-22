class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
         int a=0,b=1;
         vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {ans[b]=arr[i];
            b+=2;}
            else
            {ans[a]=arr[i];
            a+=2;}
        }
        return ans;
    }
};