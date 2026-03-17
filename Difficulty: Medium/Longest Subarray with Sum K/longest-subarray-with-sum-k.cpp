class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<long long ,int>a;
        int n=arr.size();
        int maxim=0;
        long long sum=0;
        
        for(int i=0;i<n;i++)
        {  sum+=arr[i];
            if(sum==k)
            {
                maxim=i+1;
            }
            if(a.find(sum-k)!=a.end())
            {
                maxim=max(maxim,i-a[sum-k]);
            }
        if(a.find(sum)==a.end())
            {
                a[sum]=i;
            }
        }
        return maxim;
    }
};