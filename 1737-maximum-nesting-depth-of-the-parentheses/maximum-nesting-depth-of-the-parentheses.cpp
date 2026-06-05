class Solution {
public:
    int maxDepth(string s) {
        int p=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
         if(s[i]=='(')
 p++;
 else if(s[i]==')')
 p--;       
 ans=max(ans,p);
 }
 return ans;
    }
};