class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // sort and check
        unordered_map<int, bool> mp;
        int d = 0;

        for(int i: nums){
            if(mp[i]){
                d = i;
            }
            mp[i] = true;
        }

        for(int i=1; i<=nums.size(); i++){
            if(mp.find(i)==mp.end()){
                return {d,i};
            }
        }

        return {};
    }
};