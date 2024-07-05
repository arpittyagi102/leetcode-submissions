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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* curr = head;
        int cameFrom = 0;       // 0 means Equal, 1 means larger, -1 means smaller
        vector<int> cp;
        int count = 0;

        while(curr->next){
            if(cameFrom == 1 && curr->val < curr->next->val){
                cp.push_back(count);
            } else if(cameFrom == -1 && curr->val > curr->next->val){
                cp.push_back(count);
            }

            if(curr->val < curr->next->val){
                cameFrom = -1;
            } else if(curr->val > curr->next->val){
                cameFrom = 1;
            } else {
                cameFrom = 0;
            }
            curr = curr->next;
            count++;
        }
        if(cp.size() < 2){
            return {-1,-1};
        }

        int minDis = INT_MAX;

        for(int i=1; i<cp.size(); i++){
            minDis = min(cp[i] - cp[i-1], minDis);
        }


        return {minDis, cp[cp.size()-1] - cp[0]};
    }
};