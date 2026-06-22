class Solution {
public:
   void fun(int ind,string s,string digits,string combos[],vector<string>&ans)
   {
     if(ind==digits.size())
     {
        ans.push_back(s);
        return;
     }
     int digit=digits[ind]-'0';
     for(int i=0;i<combos[digit].size();i++)
     {
           fun(ind+1,s+combos[digit][i],digits,combos,ans);
     }
   }
    vector<string> letterCombinations(string digits) {
        string combos[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        string s="";
        if(digits.empty()) return {};
        fun(0,s,digits,combos,ans);
        return ans;
    }
};