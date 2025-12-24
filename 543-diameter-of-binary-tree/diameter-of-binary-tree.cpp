class Solution {
  public:
    int diameterOfBinaryTree(TreeNode *root) {
        int diameter = 0;
        maxDepth(root, diameter);
        return diameter;
    }

  private:
    int maxDepth(TreeNode *root, int &diameter) {
        if (root == nullptr) {
            return 0;
        }

        int leftDepth = maxDepth(root->left, diameter);
        int rightDepth = maxDepth(root->right, diameter);
        diameter = max(diameter, leftDepth + rightDepth);
        return max(leftDepth, rightDepth) + 1;
    }
};