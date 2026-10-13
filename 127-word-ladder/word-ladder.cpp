class Solution {
public:
    int ladderLength(string beginword, string endword, vector<string>& wordlist) {
        unordered_set<string>dict(wordlist.begin(),wordlist.end());
        if(dict.find(endword)==dict.end()) return 0;
        queue<pair<string,int>>q;
        q.push({beginword,1});
        dict.erase(beginword);
        while(!q.empty())
        {
            string word=q.front().first;
            int steps=q.front().second;
            q.pop();
            if(word==endword) return steps;
            for(int i=0;i<word.length();i++)
            {
              char original=word[i];
              for(char ch='a';ch<='z';ch++)
              {
                word[i]=ch;
                if(dict.find(word)!=dict.end())
                {
                    q.push({word,steps+1});
                    dict.erase(word);
                }
              }
              word[i]=original;
            }
        }
        return 0;
    }
};