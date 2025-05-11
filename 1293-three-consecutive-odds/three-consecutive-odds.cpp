class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int consecutiveOdds = 0;

        for(int i : arr){
            if(i%2 == 0){
                consecutiveOdds = 0;
                
            } else {
                consecutiveOdds++;
                if(consecutiveOdds == 3){
                    return true;
                }
            }
        }

        return false;
    }
};