class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicated;
        int sum = 0;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            int index = abs(nums[i])-1;

            if(nums[index] < 0)
                duplicated = abs(nums[i]);

            nums[index] *= -1;
            sum += abs(nums[i]);
        }

        sum = sum - duplicated;
        int expectedSum = (n*(n+1))/2;
        int replaced = expectedSum - sum;

        return {duplicated, replaced};
    }
};