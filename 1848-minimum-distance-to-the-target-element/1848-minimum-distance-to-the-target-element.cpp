class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDis = nums.size() + 1;
        
        for(int i=start; i<nums.size(); i++) 
            if(nums[i] == target){
                minDis = i - start;
                break;
            }

        for(int i=start; i>=0; i--)
            if(nums[i] == target){
                minDis = min(minDis, start - i);
                break;
            }
            
        return minDis;
    }
};