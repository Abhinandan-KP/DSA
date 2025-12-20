class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
         
          int delet=0;
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=0;j<strs.size()-1;j++)
            { 
                if(strs[j][i]>strs[j+1][i])
                {delet++;
                break;}
            }
        }
        return delet;
    }
};