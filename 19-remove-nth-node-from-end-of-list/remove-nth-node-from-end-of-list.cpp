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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int length = 0;

        while(temp!=nullptr){
            length++;
            temp = temp->next;
        }

        if(length==1){
            return nullptr;
        }
        if(length==n){
            return head->next;
        }

        length -= n-1;
        temp = head;
        
        while(temp!=nullptr){
            length--;
            if(length==1){
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
        }

        return head;
    }
};