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
    void printList(ListNode* list){     // print the linked list in format [ 1 2 3 4 5 ]
        cout<<"[ ";
        while(list != nullptr){
            cout<<list->val<<" ";
            list = list->next;
        }
        cout<<"]\n";
    }

    int getCount(ListNode* list){
        int count = 0;
        while (list != NULL) {
            count++;
            list = list->next;
        }
        return count;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(getCount(l1) < getCount(l2)){
            ListNode* tempNode = l1;
            l1 = l2;
            l2 = tempNode;
            cout<<"Second List is longer\n";
        }
        ListNode* head = l1; 
        if(l2==nullptr) return l1; 
        int carry = 0;

        while(true){
            cout<< l1->val <<"+"<< l2->val <<"="<< l1->val+l2->val <<endl;
            l1->val = l1->val + l2->val + carry;
            //cout<<"value changed to : "<<l1->val<<endl;
            //cout<<"l1 : ";printList(head);
            carry = 0;
            if(l1->val > 9){
                carry = 1;
                l1->val %= 10;
            }
            //cout<<"l1 : ";printList(head);
            if(l1->next == nullptr || l2->next == nullptr)
                break;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(carry){
            while(l1->next != nullptr){
                l1 = l1->next;
                if(l1->val == 9)
                    l1->val = 0;
                else{
                    l1->val += carry;
                    carry = 0;
                    break;
                }
            }
            if(carry){
                ListNode* temp = new ListNode(1);
                l1->next = temp;
            }
        }


        return head;
    
    }
};