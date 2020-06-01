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
//***Let's Prove Max Howell Wrong***

//At every point swap the left and right subtrees with each other
//Then recursilvely call left and right subtrees and continue the same operation
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        //Swap Operation
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        
        //Recursively calling left and right subtree.
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};