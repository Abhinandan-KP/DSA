class Solution {
  public:
    void solve(Node* root, vector<int> &ans) {
        if(root == NULL) return;

        ans.push_back(root->data);   // Root
        solve(root->left, ans);      // Left
        solve(root->right, ans);     // Right
    }

    vector<int> preOrder(Node* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};