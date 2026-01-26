class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>>ans;
        int mini=1e9;
        int diff=1e9;
       for(int i=0;i<n-1;i++)
        {  diff=arr[i+1]-arr[i];
           if(diff<mini)
           {
               mini=diff;
               ans.clear();
               ans.push_back({arr[i],arr[i+1]});
           }
           else if(mini==diff)
           {
               ans.push_back({arr[i],arr[i+1]});
           }
        }
        return ans;
    }
};