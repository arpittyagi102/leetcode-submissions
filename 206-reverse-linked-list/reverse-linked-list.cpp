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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return nullptr;

        ListNode* temp = head;
        ListNode* rev = new ListNode(head->val);

        while(temp->next){
            temp=temp->next;
            cout<<temp->val<<" ";
            ListNode* t = new ListNode(temp->val,rev);
            rev = t;
        }

        return rev;
    }
};