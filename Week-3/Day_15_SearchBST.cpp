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
    TreeNode* checkBST(TreeNode* root,int val)
    {
        if(root==NULL)
            return NULL;
        if(root->val==val)
            return root;
        else
        {
            if(root->val>val)
                return checkBST(root->left,val);
            else
                return checkBST(root->right,val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
            return NULL;
        
        return checkBST(root,val);
        
    }
};
//Logic Based on Binary Search Tree Property.
//Time Complexity O(N).