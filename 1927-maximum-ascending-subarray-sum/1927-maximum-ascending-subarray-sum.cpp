class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0];
        int maxSum = sum;

        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] < nums[i]){
                sum += nums[i];
            } else {
                maxSum = max( maxSum, sum );
                sum = nums[i];
            }

            maxSum = max( maxSum, sum );
        }

        return maxSum;
    }
};