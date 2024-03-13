class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int p = 0;
        if(nums.size()<2){
            return true;
        }

        if(nums[0] > nums[1]){
            p++;
        }

        for(int i=1; i<nums.size()-2; i++){
            if(nums[i] > nums[i+1]){
                if(nums[i-1] > nums[i+1] && nums[i] > nums[i+2]){
                    return false;
                } else {
                    p++;
                }
            }
        }

        if(nums[nums.size()-2] > nums[nums.size()-1] && nums.size() > 2){
            p++;
        }

        return p<=1;
    }
};