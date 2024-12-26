class Solution {
    int ans = 0;
    void helper(vector<int>& nums, int target, int i, int sum){
        if(i == nums.size()){
            if(sum==target){
                ans++;
            }
            return;
        }

        helper(nums,target, i+1, sum+nums[i]);
        helper(nums,target, i+1, sum-nums[i]);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        helper(nums, target, 0, 0);
        return ans;
    }
};