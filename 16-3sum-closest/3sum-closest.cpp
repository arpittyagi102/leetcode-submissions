class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum = 0;
        int ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                sum = nums[i] + nums[left] + nums[right];
                if(sum < target){
                    left++;
                } else if(sum > target){
                    right--;
                } else {
                    return target;
                }
                if(abs(sum-target) < abs(ans-target)){
                    ans = sum;
                }
            } 
        }

        return ans;
    }
};