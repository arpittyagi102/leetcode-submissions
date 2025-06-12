class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        // Brute Force
        int diff = 0;
        int maxDiff = 0;

        // Iterating from 1st to 2nd last
        for(int i=0; i<nums.size()-1; i++){
            diff = abs(nums[i] - nums[i+1]);
            maxDiff = max(maxDiff, diff);
        }

        // comparing first and last element as its an circular array
        diff = abs(nums[0] - nums[nums.size()-1]);
        maxDiff = max(maxDiff, diff);

        return maxDiff;
    }
};