/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    void serialize1(TreeNode*root,string&out)
    {   if(root==nullptr) 
         {
            out+="#,";
            return ;
         }
         out+=to_string(root->val)+",";
         serialize1(root->left,out);
         serialize1(root->right,out);
    }
    string serialize(TreeNode* root) {
         string out="";
         serialize1(root,out);
         return out;
    }

 TreeNode* deserialize1(stringstream& ss)
 {
     string token;
     if(!getline(ss,token,','))
     {
        return nullptr;
     }
     if(token=="#")
     {
        return nullptr;
     }
     TreeNode*node=new TreeNode(stoi(token));
     node->left=deserialize1(ss);
     node->right=deserialize1(ss);
     return node;
 }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deserialize1(ss);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));