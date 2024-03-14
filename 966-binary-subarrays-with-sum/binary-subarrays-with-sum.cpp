class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int totalCount = 0;
        int sum = 0;
        vector<int> prefixSum(nums.size()+1);
        prefixSum[0] = 1;
        
        for (int num: nums) {
            sum += num;
            if (sum >= goal) {
                totalCount += prefixSum[sum - goal];
            }
            prefixSum[sum]++;
        }
        
        return totalCount;
    }
};