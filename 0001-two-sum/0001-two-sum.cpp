class Solution {
public:
    vector<int> result;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i]+nums[j] == target){
                    result.push_back(j);
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};