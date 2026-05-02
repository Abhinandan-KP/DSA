import java.util.*;

class Solution {
    
    void dfs1(int node, boolean[] vis, Stack<Integer> st, ArrayList<ArrayList<Integer>> adj) {
        vis[node] = true;

        for(int nei : adj.get(node)) {
            if(!vis[nei]) {
                dfs1(nei, vis, st, adj);
            }
        }

        st.push(node);
    }

    void dfs2(int node, boolean[] vis, ArrayList<ArrayList<Integer>> rev) {
        vis[node] = true;

        for(int nei : rev.get(node)) {
            if(!vis[nei]) {
                dfs2(nei, vis, rev);
            }
        }
    }

    public int kosaraju(int V, int[][] edges) {

        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        for(int i = 0; i < V; i++) adj.add(new ArrayList<>());

        for(int[] e : edges) {
            adj.get(e[0]).add(e[1]);
        }

        boolean[] vis = new boolean[V];
        Stack<Integer> st = new Stack<>();
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs1(i, vis, st, adj);
            }
        }
        ArrayList<ArrayList<Integer>> rev = new ArrayList<>();
        for(int i = 0; i < V; i++) rev.add(new ArrayList<>());

        for(int i = 0; i < V; i++) {
            for(int nei : adj.get(i)) {
                rev.get(nei).add(i);
            }
        }
        Arrays.fill(vis, false);
        int scc = 0;

        while(!st.isEmpty()) {
            int node = st.pop();

            if(!vis[node]) {
                dfs2(node, vis, rev);
                scc++;
            }
        }

        return scc;
    }
}