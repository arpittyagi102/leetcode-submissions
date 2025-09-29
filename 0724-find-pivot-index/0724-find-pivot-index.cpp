class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        vector<int> preSum(nums.size());
        vector<int> postSum(nums.size());

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            preSum[i] = sum; 
        }
        sum = 0;

        for(int i=nums.size()-1; i>=0; i--){
            sum += nums[i];
            postSum[i] = sum;
        }

        if(nums.size() < 2){
            return 0;
        }

        if(postSum[1] == 0){
            return 0;
        }

        for(int i=1; i<nums.size()-1; i++){
            if(preSum[i-1] == postSum[i+1]){
                return i;
            }
        }

        if(preSum[preSum.size()-2] == 0){
            return nums.size()-1;
        }

        return -1;
    }
};