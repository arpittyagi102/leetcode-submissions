class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNum = INT_MAX;
        int moves = 0;

        for(int num : nums) 
            minNum = min(minNum, num);

        for(int num : nums)
            moves += num - minNum;

        return moves;
    }
};