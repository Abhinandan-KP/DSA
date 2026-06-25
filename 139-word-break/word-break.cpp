class Solution {
public:
unordered_set<string>sc;
vector<int> memo;
     bool res(int idx,string &s)
     {   int n=s.size();
            if(idx>=n)   return true;
            if (memo[idx] != -1) return memo[idx];
            if(sc.find(s.substr(idx))!=sc.end()) return memo[idx] = true;

            for(int l=idx;l<n;l++)
            {   string temp=s.substr(idx,l-idx+1);
                 if(sc.find(temp)!=sc.end() && res(l+1,s))
               return memo[idx] = true;
            }
           return memo[idx] = false;
     }
    bool wordBreak(string s, vector<string>& dict) {
        memo.assign(s.size(), -1);
      for(string a:dict)
      {
        sc.insert(a);
      }
      return res(0,s);
    }
};