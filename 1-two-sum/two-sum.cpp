class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        unordered_map<int,int>p;
        int n=a.size();
       
        for(int i=0;i<n;i++)
        {
          int  x=k-a[i];
           if(p.find(x)!=p.end())
           {
            return {p[x],i};
           }
           p[a[i]]=i;
        }
        return {-1,-1};
    }
};