class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int timeTaken = 0;

        while (true) {
            for(int i=0; i<tickets.size(); i++) {
                if(tickets[i]) {
                    tickets[i]--;
                    timeTaken++;
                }

                if(tickets[k] == 0)
                    return timeTaken;
            }
        }

        return 0;
    }
};