class Solution {
    vector<int> getDigits(int num) {
        int rem = 0;
        vector<int> ans;

        while(num) {
            rem = num % 10;
            num /= 10; 
            ans.push_back(rem);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int num : nums) {
            vector<int> digits = getDigits(num);
            ans.insert(ans.end(), digits.begin(), digits.end());
        }

        return ans;
    }
};