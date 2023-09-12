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

    void printList(ListNode* list){
        ListNode* current=list;
        cout<<'[';
        while(current != nullptr){
            cout<<current->val<<" ";
            current = current->next;
        }
        cout<<"]\n";
    }

    ListNode* addNum(ListNode* head, int num) {
        ListNode* newNode = new ListNode(num);

        if (head == nullptr || num < head->val) {
            newNode->next = head;
            return newNode;
        }

        ListNode* current = head;

        while (current->next != nullptr && current->next->val < num) {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;

        return head;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        printList(list1);
        while(list2 != nullptr){
            list1 = addNum(list1,list2->val);      
            list2= list2->next;
        }

        return list1;
    }
};