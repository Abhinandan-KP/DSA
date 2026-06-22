class Solution {
  public:
   void fun(int i,int x,vector<int>&sums,vector<int>&arr)
 {
          if(i==sums.size()) 
          {
            arr.push_back(x);
            return;
          }
          fun(i+1,x+sums[i],sums,arr);
          fun(i+1,x,sums,arr);
 }
    vector<int> subsetSums(vector<int>& sums) {
        // code here
        vector<int>arr;
        sort(sums.begin(),sums.end());
            fun(0,0,sums,arr);
            return arr;
    }
};