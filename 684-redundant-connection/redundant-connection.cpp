class Solution {
public:
 class disjointset
 {
    private:
    vector<int>parent;
    vector<int>rank;
    public:
    disjointset(int n)
    {
        parent.resize(n+1);
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
        }
    }
    int find(int node)
    {
        if(node==parent[node])
        {
            return node;
        }
        return parent[node]=find(parent[node]);
    }
    bool unionbyrank(int u,int v)
    {
        int rootu=find(u);
        int  rootv=find(v);

        if(rootu==rootv) return false;
        if(rootu<rootv) parent[rootu]=rootv;
        else if(rootu>rootv) parent[rootv]=rootu;
        else
        {
            parent[rootv]=rootu;
            rank[rootv]++;
        }
        return true;
    }
 };
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        disjointset dsu(n);
         for(auto edge:edges)
         {
            int u=edge[0];
            int v=edge[1];
            if(!dsu.unionbyrank(u,v))
            {
                return edge;
            }
         }
         return {};
    }
};