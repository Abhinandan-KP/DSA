class Solution {
  public:
    Node* findTarget(Node* root, int target, unordered_map<Node*, Node*> &parent) {
        queue<Node*> q;
        q.push(root);

        Node* res = NULL;

        while(!q.empty()) {
            Node* curr = q.front();
            q.pop();

            if(curr->data == target) {
                res = curr;
            }

            if(curr->left) {
                parent[curr->left] = curr;
                q.push(curr->left);
            }

            if(curr->right) {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }

        return res;
    }

    int minTime(Node* root, int target) {
        unordered_map<Node*, Node*> parent;
        unordered_map<Node*, bool> vis;

        Node* start = findTarget(root, target, parent);

        queue<Node*> q;
        q.push(start);
        vis[start] = true;

        int time = 0;

        while(!q.empty()) {
            int size = q.size();
            bool burned = false;

            for(int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();

                if(curr->left && !vis[curr->left]) {
                    q.push(curr->left);
                    vis[curr->left] = true;
                    burned = true;
                }

                if(curr->right && !vis[curr->right]) {
                    q.push(curr->right);
                    vis[curr->right] = true;
                    burned = true;
                }

                if(parent[curr] && !vis[parent[curr]]) {
                    q.push(parent[curr]);
                    vis[parent[curr]] = true;
                    burned = true;
                }
            }

            if(burned) time++;
        }

        return time;
    }
};