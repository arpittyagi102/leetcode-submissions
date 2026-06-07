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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> mp;
        unordered_set<int> children;

        for(const auto& des : descriptions) {
            if(!mp.count(des[0]))
                mp[des[0]] = new TreeNode(des[0]);
            if(!mp.count(des[1]))
                mp[des[1]] = new TreeNode(des[1]);            

            if(des[2])
                mp[des[0]]->left = mp[des[1]];
            else 
                mp[des[0]]->right = mp[des[1]];

            children.insert(des[1]);
        }

        for (auto& [val, node] : mp)
            if (children.find(val) == children.end())
                return node;

        return nullptr;
    }
};