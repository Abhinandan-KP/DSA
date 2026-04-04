class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int>sumind;
        int maxlen=0;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==0)
            maxlen=i+1;
            else if(sumind.find(sum)!=sumind.end())
            maxlen=max(maxlen,i-sumind[sum]);
            else
            sumind[sum]=i;
        }
        return maxlen;
    }
};