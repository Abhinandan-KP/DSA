class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& A) {
        sort(A.begin(),A.end());
        vector<vector<int>>ans;
        for(auto p:A)
        {
       if(ans.empty()||ans.back()[1]<p[0])
       {
        ans.push_back(p);
       }
       else
       {
        ans.back()[1]=max(ans.back()[1],p[1]);
       }
        }
        return ans;
    }
};