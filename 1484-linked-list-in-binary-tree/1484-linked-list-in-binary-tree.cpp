class Solution {
bool isEqual(ListNode* head, TreeNode* root) {
    if(!head->next){
        return true;
    }

    if(root->left && root->left->val == head->next->val && isEqual(head->next,root->left)){
        return true; 
    }

    if(root->right && root->right->val == head->next->val && isEqual(head->next,root->right)){
        return true;
    }
    
    return false;
}
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!root){
            return false;
        }

        if(head->val == root->val && isEqual(head,root)){
            return true;
        }

        return isSubPath(head,root->left) || isSubPath(head,root->right);
    }   
};