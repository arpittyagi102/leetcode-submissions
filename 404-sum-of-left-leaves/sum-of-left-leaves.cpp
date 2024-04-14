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
    int ans = 0;
    void helper(TreeNode* root,bool cameFrom){
        if(root->left){
            helper(root->left,false);
        }
        if(root->right){
            helper(root->right,true);
        }
        if(!root->left && !root->right && !cameFrom){
            ans += root->val;
        }
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        helper(root,true);
        return ans;
    }
};