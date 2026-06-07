class Solution {
  public:
   int atmost(string s,int k)
   {
       int left=0,res=0;
       int n=s.size();
       unordered_map<char,int>freq;
       
           for(int right=0;right<n;right++)
           {
             freq[s[right]]++;
           
           while(freq.size()>k)
           {
               freq[s[left]]--;
               if(freq[s[left]]==0) freq.erase(s[left]);
               left++;
           }
           res+=(right-left+1);
       }
   
       return res;
   }
    int countSubstring(string &s) {
        // Code here
        return atmost(s,3)-atmost(s,2);
        
    }
};