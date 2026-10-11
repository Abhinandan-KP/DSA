class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
       vector<vector<int>> adj(num);
       vector<int>indegree(num,0);
       for(auto p:pre)
       {
          adj[p[1]].push_back(p[0]);
          indegree[p[0]]++;
       }
       vector<int>temp;
       queue<int>q;
       vector<int>toporder;
       for(int i=0;i<num;i++)
       {
         if(indegree[i]==0)
         {
            q.push(i);
         }
       }
       while(!q.empty())
       {
             int curr=q.front();
             q.pop();
             toporder.push_back(curr);
             for(int neigh:adj[curr])
             {
                indegree[neigh]--;
                if(indegree[neigh]==0)
                {
                    q.push(neigh);
                }
             }
       }
       if(toporder.size()==num)
       {
            return toporder;
       }
       return {};
    }
};