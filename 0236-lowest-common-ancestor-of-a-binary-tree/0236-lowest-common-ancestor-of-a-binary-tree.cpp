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
public:
    
    bool findpath(TreeNode* root ,vector<TreeNode*>&path , TreeNode* n)
    {
        if(root==NULL)
        {
          return false;
        }
        path.push_back(root);
        if(root==n)return true;
        if(findpath(root->left ,path, n) || findpath(root->right ,path ,n))return true;
        path.pop_back();
        return false;
        

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>path1, path2;
        
        if(!findpath(root ,path1 , p) || !findpath(root, path2 ,q))return NULL;
        
        TreeNode* ans = NULL;
        for(int i=0; i<path1.size()&& i<path2.size(); i++)
        {
            if(path1[i]==path2[i])
                ans  =path1[i];

        }
        return ans;
        
    }
};