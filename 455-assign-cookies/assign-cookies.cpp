class Solution {
public:
    int findContentChildren(vector<int>& greed, vector<int>& cookie) {
          sort(greed.begin(),greed.end());
        sort(cookie.begin(),cookie.end());
        int i=0;
        int j=0;
        while(i<greed.size() && j<cookie.size())
        {
            if(cookie[j]>=greed[i])
            {
                i++;
            }
            j++;
        }
        return i;
    }
};