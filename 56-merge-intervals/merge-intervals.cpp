class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& A) {
        sort(A.begin(),A.end());
        vector<vector<int>>ans;
        int n=A.size();
        for(int i=0;i<n;i++)
        {  int start=A[i][0];
        int end=A[i][1];
        int j=i+1;
            while(  j<n && A[j][0]<=end)
            {
              end=max(end,A[j][1]);
              j++;
            }
            ans.push_back({start,end});
            i=j-1;   // after while loop i appnd j so i have to reduce 1
        }
        return ans;
    }
};