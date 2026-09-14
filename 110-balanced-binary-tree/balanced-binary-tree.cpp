/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   int check(TreeNode*root)
   {
    if(root==nullptr) return 0;

     int leftht=check(root->left);
      if(leftht==-1) return -1;
      int rightht=check(root->right);
       if(rightht==-1) return -1;

       if(abs(leftht-rightht)>1)
       return -1;

    return  1+max(leftht,rightht);
   }
    bool isBalanced(TreeNode* root) {
        return check(root)!=-1;
    }
};