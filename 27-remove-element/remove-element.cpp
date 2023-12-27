class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int change = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==val){
                change++;
            }
            else if(change){
                nums[i-change] = nums[i];
            }
        }
        return nums.size()-change;
    }
};