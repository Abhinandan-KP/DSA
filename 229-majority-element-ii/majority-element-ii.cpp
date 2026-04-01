class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
         int n=nums.size();
         unordered_map<int,int>p;
         for(int i=0;i<n;i++)
         {     p[nums[i]]++;
            
       
            if(p[nums[i]]==(n/3)+1)
            ans.push_back(nums[i]);
            if(ans.size()==2)
            break;
         }
         return ans;
    }
};