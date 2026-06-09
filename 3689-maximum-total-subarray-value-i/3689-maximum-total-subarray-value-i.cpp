class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxNum = 0;
        long long minNum = INT_MAX;

        for(int num : nums) {
            maxNum = maxNum > num ? maxNum : num;
            minNum = minNum < num ? minNum : num;
        }

        return (maxNum - minNum) * k;
    }
};