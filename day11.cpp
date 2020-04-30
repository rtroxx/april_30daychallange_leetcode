/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        if(lh>rh)
            return lh+1;
        else
            return rh+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        int ld=diameterOfBinaryTree(root->left);
        int rd=diameterOfBinaryTree(root->right);
        return max(lh+rh,max(ld,rd));
        
        
    }
};
