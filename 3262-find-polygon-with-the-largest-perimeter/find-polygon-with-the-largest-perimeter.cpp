class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long ans;
        long long sum = 0;

        for(int i: nums){
            sum += i;
        }

        for(int i=nums.size()-2; i>=0; i--) {
            sum -= nums[i+1];
            if(nums[i+1] < sum){
                return sum+nums[i+1];
            }
        }

        return -1;
    }
};