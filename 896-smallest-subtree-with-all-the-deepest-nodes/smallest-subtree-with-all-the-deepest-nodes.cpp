class Solution{
public:
pair<int,TreeNode*>solve(TreeNode*root){
if(root==NULL)return{0,NULL};
pair<int,TreeNode*>left=solve(root->left);
pair<int,TreeNode*>right=solve(root->right);
int lh=left.first;
int rh=right.first;
if(lh==rh)return{lh+1,root};
if(lh>rh)return{lh+1,left.second};
return{rh+1,right.second};
}
TreeNode*subtreeWithAllDeepest(TreeNode*root){
return solve(root).second;
}
};
