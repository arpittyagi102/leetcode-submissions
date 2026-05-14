class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        unordered_map<int,int> mp;

        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++)
            if(mp.find(nums[i]) == mp.end())
                mp[nums[i]] = i;
        
        for(int i=0; i<temp.size(); i++)
            temp[i] = mp[temp[i]];

        return temp;
    }
};