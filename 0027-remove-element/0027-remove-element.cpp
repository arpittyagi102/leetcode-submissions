class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size=nums.size();
        int change = 0;

        for(int i=0; i<size; i++){
            if(change!=0)
                nums[i-change] = nums[i];
            if(nums[i]==val)
                change++;
        }

        return size-change;
    }
};