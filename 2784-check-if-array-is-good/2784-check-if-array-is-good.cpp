class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int num: nums) {
            // If the number is out of bounds
            if(num < 1 || num >= nums.size()) {
                return false;
            }

            // If the number already exists in map
            if(mp[num]){
                // if the number is last one
                if(num == nums.size()-1){
                    if(mp[num] > 1)
                        return false;
                // if its not the last one
                } else {
                    return false;
                }
            } 
            
            // if it doesn't exist or (is last number and exists only once), add it to map
            mp[num]++;
        }

        return true;
    }
};