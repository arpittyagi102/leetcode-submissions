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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        ListNode* one = head;
        stack<ListNode*> sk;

        while(temp){
            sk.push(temp);
            temp = temp->next;
        }
        int n = sk.size();

        while(head && head->next){
            temp = head->next;
            head->next = new ListNode(sk.top()->val);
            sk.pop();
            head->next->next = temp;
            head = temp;
        }

        while(--n){
            one = one->next;
        }
        one->next = nullptr;
    }
};