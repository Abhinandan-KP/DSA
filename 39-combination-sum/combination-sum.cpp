class Solution {
public:
   void fun(int i,int sum,vector<int>can,vector<vector<int>>&ans,vector<int>&ds)
   {
         if(sum==0)
          {
            ans.push_back(ds);
            return;
          }
       if (i == can.size() || sum < 0) {
            return;
        }
       if(can[i]<=sum)
       {
        ds.push_back(can[i]);
        fun(i,sum-can[i],can,ans,ds);
        ds.pop_back();
       }
       fun(i+1,sum,can,ans,ds);
   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
      fun(0,target,candidates,ans,ds);
       return  ans;
    }
};