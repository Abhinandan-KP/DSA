class Solution {
public:
bool ispal(int i,int j,string& s)
{
    while(i<j)
    {
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
 void f(int i,int n,string &s,vector<string>&path,vector<vector<string>>&result)
 {
      if(i==n) 
      {
        result.push_back(path);
        return;
      }
      for(int j=i;j<n;j++)
      {
        if(ispal(i,j,s))
        {
            string sub=s.substr(i,j-i+1);
            path.push_back(sub);
            f(j+1,n,s,path,result);
            path.pop_back();
        }
      }
 }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string>path;
        int n=s.length();
        f(0,n,s,path,result);
        return result;
    }
};