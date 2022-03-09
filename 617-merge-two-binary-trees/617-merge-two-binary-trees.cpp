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
    TreeNode* mer(TreeNode* root1, TreeNode* root2) {
     if(root1==NULL && root2==NULL)return NULL;
        if( root2==NULL)return root1;
        if(root1==NULL )return root2;
        TreeNode * op=new TreeNode (root1->val+root2->val);
        op->left=mer(root1->left,root2->left);
        op->right=mer(root1->right,root2->right);
        return op;

        
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
     return mer(root1,root2);
    }
};