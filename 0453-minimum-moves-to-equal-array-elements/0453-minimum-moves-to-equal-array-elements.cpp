class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0;
        int minNum = INT_MAX;

        for(int num : nums) {
            moves += num;
            minNum = min(minNum, num);
        }

        moves -= nums.size() * minNum; 

        return moves;
    }
};