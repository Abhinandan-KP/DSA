class Solution {
  public:
    int findCeil(Node* root, int x) {
        int ceil = -1;

        while(root != NULL) {
            if(root->data == x) {
                return x;
            }
            else if(root->data < x) {
                root = root->right;
            }
            else {
                ceil = root->data;
                root = root->left;
            }
        }

        return ceil;
    }
};