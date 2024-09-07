/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool isEqual(ListNode* head, TreeNode* root) {
        cout<<"======start====="<<head->val<<" "<<root->val<<"\n";
        if(!head->next){
            cout<<"======end:====="<<head->val<<" "<<root->val<<"\n\n";
            return true;
        }

        if(root->left && root->left->val == head->next->val){
            if(isEqual(head->next,root->left)){
                cout<<"oh its left is equal "<<head->next->val<<" "<<root->left->val<<endl;
                cout<<"======end:=====\n\n";
                return true;
            }
        }
        if(root->right && root->right->val == head->next->val){
            if(isEqual(head->next,root->right)){
                cout<<"oh its right is equal "<<head->next->val<<" "<<root->right->val<<endl;
                cout<<"======end:=====\n\n";
                return true;
            }
        
        } else {
            cout<<"Nothingg is equal\n";
            cout<<"======end:====="<<head->val<<" "<<root->val<<"\n\n";
            return false;
        }
        
        cout<<"going up back\n";
        cout<<"======end:====="<<head->val<<" "<<root->val<<"\n\n";
        return false;
    }
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!root){
            return false;
        }

        if(head->val == root->val){
            cout<<"Found "<<head->val<<" yayyy\n";
            if(isEqual(head,root)){
                return true;
            }
        }

        return isSubPath(head,root->left) || isSubPath(head,root->right);
    }   
};