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
    
    
    void  preorderTraversalhelper(vector<int>&ans ,TreeNode* root )
    {
        if(root!=NULL)
        {
            ans.push_back(root->val);
            preorderTraversalhelper(ans ,root->left);
            preorderTraversalhelper(ans, root->right);

        }

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorderTraversalhelper(ans, root);
        return ans;
        
    }
};