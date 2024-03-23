class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int> pre(customers.size());
        int ans = 0;
        pre[0] = customers[0] == 'Y' ? 1 : -1;

        for(int i=1; i<customers.size(); i++){
            pre[i] = customers[i] == 'Y' ? pre[i-1]+1 : pre[i-1]-1;

            if(pre[i] > pre[ans]){
                ans = i;
            }
        }

        return pre[ans] > 0 ? ans+1 : 0;
    }
};