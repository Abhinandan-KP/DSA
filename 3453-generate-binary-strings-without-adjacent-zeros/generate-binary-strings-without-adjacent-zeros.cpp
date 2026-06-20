class Solution {
public:
void generate(int n,string s,vector<string>&result)
{
      if(s.size()==n)
      {
        result.push_back(s);
        return ;
      }
            if(s.empty()||s.back()!='0')
      generate(n,s+"0",result);

      generate(n,s+"1",result);
}
    vector<string> validStrings(int n) {
        vector<string>result;
        generate(n,"",result);
        return result;
    }
};