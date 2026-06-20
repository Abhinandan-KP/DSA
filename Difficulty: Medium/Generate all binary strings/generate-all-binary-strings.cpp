class Solution {
  public:
  void generate(int n,string s,vector<string>&result)
{
      if(s.size()==n)
      {
        result.push_back(s);
        return ;
      }
      generate(n,s+"0",result);
    //   if(s.empty()||s.back()!='1')
      generate(n,s+"1",result);
}
    vector<string> binstr(int n) {
        // code here
         vector<string>result;
        generate(n,"",result);
        return result;
    }
};