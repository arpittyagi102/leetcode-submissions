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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> sk;
        ListNode* cur = head;
        ListNode* ans = nullptr;

        while(cur){
            while(!sk.empty() && sk.top()->val < cur->val){
                sk.pop();
            }
            sk.push(cur);
            cur = cur->next;
        }

        while(sk.size()){
            cur = sk.top();
            cur->next = ans;
            ans = cur;
            sk.pop();
        }

        return cur;
    }
};