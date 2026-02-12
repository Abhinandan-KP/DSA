class Solution {
public:
    int longestStrChain(vector<string>& words) {
        int n=words.size();
     sort(words.begin(), words.end(), compare);
        vector<int>dp(n,1);
        int maxlen=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
            if(ischeck(words[i],words[j]) && dp[i]<dp[j]+1)
            {
                dp[i]=dp[j]+1;
            }
            }
            if(dp[i]>maxlen)
            maxlen=dp[i];
        }
        return maxlen;
    }
      private:
      bool static compare(string &s1,string &s2)
      {
        return s1.size()<s2.size();
      }
      bool ischeck(string s1,string s2)
      {
        if(s1.size()!=s2.size()+1)
        return false;
        int i=0,j=0;
        while(i<s1.size())
        {   if(j<s2.size() && s1[i]==s2[j])
            i++,j++;
            else
            i++;
        }
        if(i==s1.size() && j== s2.size()) return true;

        return false;
      
      }
};