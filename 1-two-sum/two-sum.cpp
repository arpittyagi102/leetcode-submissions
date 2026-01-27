class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashMap;

        for(int i=0; i<nums.size(); i++){
            int second = target - nums[i];
            if(hashMap.find(second) != hashMap.end())
                return {i, hashMap[second]};
            
            hashMap[nums[i]] = i;
        }

        return {0, 0};
    }
};