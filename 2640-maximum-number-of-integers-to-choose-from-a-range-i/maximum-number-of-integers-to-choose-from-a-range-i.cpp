class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum = 0;
        int count = 0;
        unordered_set<int> ban{banned.begin(), banned.end()};

        for(int i=1; i<=n; i++){
            if(ban.find(i) == ban.end() && sum + i <= maxSum){
                count++;
                sum += i;
            }
        }

        return count;
    }
};