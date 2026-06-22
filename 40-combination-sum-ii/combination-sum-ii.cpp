class Solution {
public:
void fun(int ind,vector<int>&can,int sum,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(sum==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<can.size();i++)
        {
            if(i>ind && can[i]==can[i-1]) continue;
          
          if(can[i]>sum) break;
    
          ds.push_back(can[i]);
            fun(i+1,can,sum-can[i],ds,ans);
            ds.pop_back();
        }
      
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int sum) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(can.begin(),can.end());
        fun(0,can,sum,ds,ans);
        return  ans;
    }
};