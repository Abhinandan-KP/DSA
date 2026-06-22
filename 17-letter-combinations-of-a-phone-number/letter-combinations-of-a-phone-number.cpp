class Solution {
public:
   void fun(int ind,string digits,string s,vector<string>&ans,string box[] )
   {
    if(ind==digits.size())
    {
        ans.push_back(s);
        return;
    }
    int digit=digits[ind]-'0';
    for(int i=0;i<box[digit].size();i++)
    {
         fun(ind+1,digits,s+box[digit][i],ans,box);
    }
   }
    vector<string> letterCombinations(string digits) {
        string box[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s="";
        vector<string>ans;
        fun(0,digits,s,ans,box);
        return ans;
    }
};