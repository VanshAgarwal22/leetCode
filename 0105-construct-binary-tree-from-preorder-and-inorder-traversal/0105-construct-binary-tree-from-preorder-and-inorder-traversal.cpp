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
    int preindex =0;
    TreeNode* buildtree(vector<int>& preorder, vector<int>& inorder ,int is , int iend)
    {
        if(is>iend)return NULL;
        
        TreeNode* node = new TreeNode(preorder[preindex]);
        preindex++;
        
        int inindex;
        for(int i =is ;i<=iend; i++)
        {
            if(inorder[i]==node->val)
            {
                inindex = i;
                break;
            }
        }
        
        node->left = buildtree(preorder ,inorder ,is, inindex-1);
        node->right = buildtree(preorder ,inorder ,inindex+1, iend);
        
        return node;
        
        
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* ans = buildtree(preorder ,inorder ,0, inorder.size()-1);
        return ans;
        
    }
};