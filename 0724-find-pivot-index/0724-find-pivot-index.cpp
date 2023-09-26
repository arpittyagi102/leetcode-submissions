class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0;
        int r = 0;

        for(int i : nums){
            r += i;
        }

        for(int i=0; i<nums.size(); i++){
            r -= nums[i];
            if(l==r)
                return i;
            l += nums[i];
        }

        return -1;
    }
};