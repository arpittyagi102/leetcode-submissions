class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int start=0;
        int n = 1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                start = i;
                break;
            }
        }

        if(nums[start] != 1){
            return 1;
        }
        
        for(int i=start; i<nums.size()-1; i++){
            if(nums[i+1]-nums[i] > 1){
                return nums[i]+1;
            }
        }

        return nums[nums.size()-1]+1;
    }
};