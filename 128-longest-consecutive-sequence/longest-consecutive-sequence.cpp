class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
    if (n == 0) return 0;
    unordered_set<int>m;
    for(int i=0;i<n;i++)
    {
        m.insert(nums[i]);
    }
    int cnt;
    int longest=1;
    for(auto it:m)
    {  
        if(m.find(it-1)==m.end())
        {
             cnt=1;
              
             while(m.find(it+1)!=m.end())
             {
                 cnt++;
                 it++;
             }
             longest=max(longest,cnt);
             
        }
    
    }
    return longest;
    }
};