class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> ones(bank.size());
        int n = 0;
        int ans = 0;
        for(int i=0; i<bank.size(); i++){
            ones[i] = count(bank[i].begin(), bank[i].end(),'1');
        }

        for(int i=0; i<ones.size(); i++){
            ans += n*ones[i];
            if(ones[i])
                n = ones[i];
        }

        return ans;
    }
};