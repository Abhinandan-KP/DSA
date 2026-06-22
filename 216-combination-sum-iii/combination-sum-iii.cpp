class Solution {
public:
 void  fun(int ind,int sum,int k,vector<int>&ds,vector<vector<int>>&ans)
 {
       if(sum==0 && ds.size()==k)
       {
            ans.push_back(ds);
            return;
       }
       if(ds.size()>k) return ;
       for(int i=ind;i<=9;i++)
       {   
        if(i<=sum)
       {  ds.push_back(i);
           fun(i+1,sum-i,k,ds,ans);
           ds.pop_back();}
         else
         {
           break;
         }
       }
 }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        fun(1,target,k,ds,ans);
        return ans;
    }
};