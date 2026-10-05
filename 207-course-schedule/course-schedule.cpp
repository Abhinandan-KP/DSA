class Solution {
    private:
    bool hasCycleDFS(int node, vector<vector<int>>& adj, vector<int>& state) {
        state[node] = 1;

        for (int neighbor : adj[node]) {
            if (state[neighbor] == 1) {
                return true;
            }

            if (state[neighbor] == 0) {
                if (hasCycleDFS(neighbor, adj, state)) {
                    return true;
                }
            }
        }

        state[node] = 2;
        return false;
    } 
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
         vector<vector<int>> adj(numCourses);

        for (const auto& pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]);
        }

        vector<int> state(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            if (state[i] == 0) {
                if (hasCycleDFS(i, adj, state)) {
                    return false;
                }
            }
        }

        return true;
    }
};