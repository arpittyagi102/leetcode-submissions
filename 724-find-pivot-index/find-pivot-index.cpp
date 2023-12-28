class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0;
        int r = accumulate(nums.begin(), nums.end(), 0);

        for(int i=0; i<nums.size(); i++){
            l += nums[i];
            if(l==r)
                return i;
            r -= nums[i];
        }

        return -1;
    }
};