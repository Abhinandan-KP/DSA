class Solution {
public:
static bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first)
        return a.first < b.first;
    else
        return a.second < b.second;
}
    vector<int> twoSum(vector<int>& a, int k) {
        vector<pair<int,int>>v;
          int n=a.size();
   for(int i=0;i<n;i++)
   {
      v.push_back({a[i],i});
   }
      sort(v.begin(),v.end());
        int l=0,r=n-1;
       while(l<r)
       {
        int mid=v[l].first+v[r].first;
        if(mid==k)
        {
            return {v[l].second,v[r].second};
        }
        else if(mid<k)
         l++;
        else
        r--;
       }
       return {-1,-1};
    }
};