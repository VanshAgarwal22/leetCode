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
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*>s;
        s.push(root);
        
        while(!s.empty())
        {
        TreeNode* temp = s.top();
            s.pop();
            
        if(temp!=NULL)
        {
            s.push(temp->left);
            s.push(temp->right);
            swap(temp->left, temp->right);
            

        }
            
        }
        return root;
        
    }
};