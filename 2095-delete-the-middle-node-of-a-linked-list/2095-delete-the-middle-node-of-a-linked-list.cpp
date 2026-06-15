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
    int len(ListNode* head) {
        int count = 0;

        while(head) {
            head = head->next;
            count++;
        }

        return count;
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        int index = len(head)/2 - 1;
        
        if(index < 0)
            return nullptr;

        ListNode* temp = head;

        while(index) {
            temp = temp->next;
            index--;
        }

        if(temp->next->next)
            temp->next = temp->next->next;
        else
            temp->next = nullptr;

        return head;
    }
};