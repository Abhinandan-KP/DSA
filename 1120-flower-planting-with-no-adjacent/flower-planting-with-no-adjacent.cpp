class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>>adj(n);
        for(auto &path:paths)
        {
            int u=path[0]-1;
            int v=path[1]-1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {    vector<bool>flower_taken(n,false);
            for(int neighbor:adj[i])
            {
                if(ans[neighbor]!=0)
                {
                  flower_taken[ans[neighbor]]=true;  
                }
            }
            for(int f=1;f<=4;f++)
            {
                if(!flower_taken[f])
                {
                    ans[i]=f;
                    break;
                }
            }
        }
        return ans;
    }
};