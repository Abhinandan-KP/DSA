class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        // ans.push_back(0);
        for(int i=1;i<=n;i++)
        {     int x = i,count = 0;
            while(x)
           { x=x&(x-1);
            count++;}
                       ans[i]=count;

        }
        
        return ans;
    }
};