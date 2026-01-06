class Solution {
public:
    vector<long long> levelSum;
    void inorder(TreeNode* root, int level) {
if (root == nullptr) return;
inorder(root->left, level + 1);
 if (level >= levelSum.size()) {
levelSum.resize(level + 1, 0);
}
 levelSum[level] += root->val;
inorder(root->right, level + 1);
 }
 int maxLevelSum(TreeNode* root) {
 inorder(root, 0);  
long long maxSum = LLONG_MIN;
int ansLevel = 0;

 for (int i = 0; i < levelSum.size(); i++) {
 if (levelSum[i] > maxSum) {
maxSum = levelSum[i];
ansLevel = i;
  }
}

return ansLevel + 1; 
    }
};
