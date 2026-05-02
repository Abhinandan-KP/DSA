class Solution {
  public:
    void mirror(Node* root) {
        if(root == NULL) return;
        
        swap(root->left, root->right);
        
        mirror(root->left);
        mirror(root->right);
    }
};