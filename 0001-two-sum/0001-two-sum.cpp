class Solution {
public:
    vector<int> result;
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        int n=nums.size(), diff;

        for(int i=0; i<n; i++){
            diff = target - nums[i];
            if(mymap.find(diff) != mymap.end())
                return {mymap[diff],i};
            mymap[nums[i]] = i;
        }
        return {};
    }
};