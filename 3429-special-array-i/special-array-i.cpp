class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()<2){
            return true;
        }

        bool type = nums[0]%2 == 0;

        for(int i=0; i<nums.size(); i++){
            if(i%2 == 0 && type != (nums[i]%2==0)){
                return false;
            }

            if(i%2 != 0 && type == (nums[i]%2==0)){
                return false;
            }
        }

        return true;
    }
};