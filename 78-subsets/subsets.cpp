class Solution {
public:
   void helper(vector<int>&nums,int i,int n,vector<int>&curr,vector<vector<int>>&x)
   {
        if(i==n)
        {
       x.push_back(curr);
       return;
        }
        helper(nums,i+1,n,curr,x);
        curr.push_back(nums[i]);
        helper(nums,i+1,n,curr,x);
        curr.pop_back();
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>curr;
        vector<vector<int>>boom;
        helper(nums,0,n,curr,boom);
        return boom;
    }
};