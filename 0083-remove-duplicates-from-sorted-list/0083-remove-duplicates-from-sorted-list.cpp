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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;

        if (current == nullptr)
            return current;

        while (current->next != nullptr) {
            while (current->val == current->next->val){ 
                if(current->next->next != nullptr) {
                    current->next = current->next->next;
                }
                else{
                    current->next = nullptr;
                    return head;
                }
            }

            current = current->next;
        }

        return head;
    }
};
