class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t = 0;
        int larger = 0;

        for(int i=0; i<tickets.size(); i++) {
            if(tickets[i] >= tickets[k]) {
                t += tickets[k];
                if(i > k)
                    larger++;
            } else {
                t += tickets[i];
            }
        }

        return t - larger;
    }
};