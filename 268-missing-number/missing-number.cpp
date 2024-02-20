class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> mp(nums.size()+1,0);
        int ans;

        for(int i: nums){
            mp[i] = 1;
        }

        for(ans = 0; ans<mp.size(); ans++){
            if(mp[ans]==0){
                return ans;
            }
        }

        return 0;
    }
};