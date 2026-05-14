class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int num: nums) {
            mp[num]++;
        }

        for(auto [k,v]: mp) {
            if(k < 1 || k >= nums.size()) {
                return false;
            } else if(k == nums.size()-1) {
                if(v!=2) return false;
            } else {
                if(v!=1) return false;
            }
        }

        return true;
    }
};