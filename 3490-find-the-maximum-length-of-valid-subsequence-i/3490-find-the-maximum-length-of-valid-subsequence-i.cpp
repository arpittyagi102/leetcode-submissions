class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int rem = nums[0] % 2;
        int len = 1;
        int oddNums = nums[0] % 2 ? 1 : 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i]%2 != rem){
                len++;
                rem = nums[i]%2;
            }
            if(nums[i] % 2){
                oddNums++;
            }
        }
        oddNums = max(oddNums, (int)nums.size()-oddNums);

        return max( len, oddNums );
    }
};