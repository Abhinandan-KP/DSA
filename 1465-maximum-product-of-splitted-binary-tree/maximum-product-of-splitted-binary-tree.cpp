class Solution{
public:
long long s=0,p=0;
int mod=1000000007;
long long f(TreeNode* r){
if(r==NULL)return 0;
return r->val+f(r->left)+f(r->right);
}
long long g(TreeNode* r){
if(r==NULL)return 0;
long long a=g(r->left);
long long b=g(r->right);
long long c=r->val+a+b;
p=max(p,c*(s-c));
return c;
}
int maxProduct(TreeNode* root){
s=f(root);
g(root);
return p%mod;
}
};
