class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int empty = 0;

        for(char move : moves){
            if(move == 'L')
                left++;
            else if(move == 'R')
                right++;
            else
                empty++;
        }

        return abs(left - right) + empty;
    }
};