class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
          int n=arr.size();
        if(n==0) return 0;
        int longest=1;
        int cnt=1;
      
        sort(arr.begin(),arr.end());
        int last=arr[0];
        for(int i=1;i<n;i++)
        {  if(arr[i]==last) continue;
            if(arr[i]-1==last)
            {
                cnt++;
                
            }
            else
            {   cnt=1;
               
            }
            last=arr[i];
            longest=max(longest,cnt);
        }
        return longest;
    }
};