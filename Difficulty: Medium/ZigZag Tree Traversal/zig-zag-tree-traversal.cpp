class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        vector<int> ans;
        if(root == NULL) return ans;

        queue<Node*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()) {
            int size = q.size();
            vector<int> temp(size);

            for(int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();

                int index = leftToRight ? i : (size - i - 1);
                temp[index] = curr->data;

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            for(int val : temp) {
                ans.push_back(val);
            }

            leftToRight = !leftToRight;
        }

        return ans;
    }
};