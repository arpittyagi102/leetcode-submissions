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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* cur = head->next;
        ListNode* ansHead = new ListNode(0);
        ListNode* ansCur = ansHead;
        int sum = 0;

        while(cur){
            if(cur->val == 0){
                ListNode* temp = new ListNode(sum);
                ansCur->next = temp;
                ansCur = ansCur->next;
                sum = 0;
            }
            sum += cur->val;
            cur = cur->next;
        }

        return ansHead->next;
    }
};