class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n=s.length();
         unordered_map<char,int>a;
         int maxlength=0;
         int left=0;
         for(int i=0;i<n;i++)
         {
              if(a.find(s[i])!=a.end())
              {
                left=max(left,a[s[i]]+1);
              }
              a[s[i]]=i;      
              maxlength=max(maxlength,i-left+1);
         }
         return maxlength;
    }
};