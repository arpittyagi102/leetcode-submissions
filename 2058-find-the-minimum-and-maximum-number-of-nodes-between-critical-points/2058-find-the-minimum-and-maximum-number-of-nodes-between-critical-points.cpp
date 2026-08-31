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
        vector<int> criticalPoints;
        int i = 0;

        while (head->next->next) {
            if (head->val > head->next->val &&
                head->next->next->val > head->next->val) {
                criticalPoints.push_back(i);
            }
            if (head->val < head->next->val &&
                head->next->next->val < head->next->val) {
                criticalPoints.push_back(i);
            }

            i++;
            head = head->next;
        }

        int n = criticalPoints.size();

        if(n < 2) {
            return {-1,-1};
        }

        int maxDistance = criticalPoints[n-1] - criticalPoints[0];
        int minDistance = maxDistance;
        for(int i=0; i<n-1; i++){
            minDistance = min(minDistance, criticalPoints[i+1] - criticalPoints[i]);
        }

        return {minDistance, maxDistance};
    }
};