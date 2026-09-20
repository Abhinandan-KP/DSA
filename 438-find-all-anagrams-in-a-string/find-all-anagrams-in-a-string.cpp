class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int slen=s.size();
        int plen=p.size();
        vector<int>result;
        if(slen<plen) return result;
        vector<int>pcount(26,0);
        vector<int>scount(26,0);
        for(int i=0;i<plen;i++)
        {
             pcount[p[i]-'a']++;
             scount[s[i]-'a']++;
        }
        if(scount==pcount)
        {
            result.push_back(0);
        }     
       for(int i=plen;i<slen;i++)
       {
              scount[s[i]-'a']++;
              scount[s[i-plen]-'a']--;
             if(pcount==scount) result.push_back(i-plen+1);
       }
       return result;
    }
};