class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> pre(nums.size());
        int sum = 0;
        int ans = 0;

        for (int i=0; i<nums.size(); i++) {
            if(nums[i]==0)
                sum--;
            else 
                sum++;
                
            pre[i] = sum;
        }

        for (int i=0; i<pre.size(); i++) {
            if(pre[i]==0){
                ans = max(ans,i+1);
            }
            if(mp.count(pre[i])){
                ans = max(ans, i-mp[pre[i]]);
            } else {
                mp[pre[i]] = i;
            }
        }

        return ans;
    }
};