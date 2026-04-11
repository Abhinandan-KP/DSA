class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>p;
        vector<int>ans;
        int n=arr.size();
        int repeating=0,missing=0;
        for(int x:arr)
        {
            p[x]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(p[i]==2)
            repeating = i;
            else if(p[i]==0)
             missing = i;
        }
        return {repeating,missing};
    }
};