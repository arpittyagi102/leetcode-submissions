class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int consOnes = 0;
        int maxConsOnes = 0;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i])
                consOnes++;
            else {
                maxConsOnes = max(consOnes, maxConsOnes);
                consOnes = 0;
            }
        }

        maxConsOnes = max(consOnes, maxConsOnes);

        return maxConsOnes;
    }
};