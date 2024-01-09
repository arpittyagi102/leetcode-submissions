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
    void helper(TreeNode* root, vector<int>& vec){
        if(root->left)
            helper(root->left, vec);
        if(root->right)
            helper(root->right, vec);
        if(!root->left && !root->right)
            vec.push_back(root->val);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1,r2;
        helper(root1,r1);
        helper(root2,r2);
        
        return r1==r2;
    }
};