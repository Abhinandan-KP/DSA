class Solution {
public:
    vector<vector<int>> ans;

    void printF(int ind, vector<int>& ds, vector<int>& nums, int n) {
      
        if (ind == n) {
            ans.push_back(ds);   
            return;
        }

        
        printF(ind + 1, ds, nums, n);

     
        ds.push_back(nums[ind]);
        printF(ind + 1, ds, nums, n);
        ds.pop_back(); 
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        printF(0, ds, nums, nums.size());
        return ans;
    }
};
