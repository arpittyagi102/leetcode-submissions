class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int countL = 0;
        int n = 0;
        int ans = 0;

        for(int i=0; i<bank.size(); i++){
            countL = count(bank[i].begin(), bank[i].end(),'1');
            ans += n*countL;
            if(countL)
                n = countL;
        }

        return ans;
    }
};