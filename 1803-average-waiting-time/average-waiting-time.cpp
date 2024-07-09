class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int available_at = 0;
        double total_wait = 0;

        for (vector<int> customer : customers) {
            int arrival = customer[0]; 
            int t = customer[1];
            available_at = max(available_at, arrival) + t;
            total_wait += available_at - arrival;
        }

        return total_wait / customers.size();
    }
};