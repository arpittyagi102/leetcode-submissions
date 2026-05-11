class Solution {
    vector<int> getDigits(int num) {
        int rem = 0;
        vector<int> ans;

        while(num) {
            rem = num % 10;
            num /= 10; 
            ans.push_back(rem);
        }

        // reverse(ans.begin(), ans.end());
        return ans;
    }
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int i=nums.size()-1; i>=0; i--) {
            vector<int> digits = getDigits(nums[i]);
            ans.insert(ans.end(), digits.begin(), digits.end());
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};