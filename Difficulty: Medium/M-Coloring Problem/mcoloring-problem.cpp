class Solution {
  public:
   bool issafe(int node,int col,vector<int>& color,vector<vector<int>>&adj)
   {
       for(int neighbour:adj[node])
       {
           if(color[neighbour]==col) return false;
       }
       return true;
   }
   bool solve(int node,int n,int m, vector<int>&color,vector<vector<int>>&adj)
   {
       if(node==n) return true;
       for(int i=1;i<=m;i++)
       {
           if(issafe(node,i,color,adj))
           {
               color[node]=i;
               if(solve(node+1,n,m,color,adj)) return true;
               color[node]=0;
           }
       }
       return false;
   }
    bool graphColoring(int n, vector<vector<int>> &edges, int m) {
        // code here
        vector<vector<int>> adj(n);
        for(auto &edge:edges)
        {
             int u=edge[0];
             int nxt=edge[1];
             adj[u].push_back(nxt);
             adj[nxt].push_back(u);
        }
        vector<int>color(n,0);
         if(solve(0,n,m,color,adj)) return true;
         return false;
    }
};