class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int,int>psc;
        int ps=0;
        int c=0;
        psc[0]=1;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            ps+=arr[i];
           int  rmv=ps-k;
            if(psc.find(rmv)!=psc.end())
            {
                c+=psc[rmv];
            }
        psc[ps]++;
        }
        return c;
    }
};