class Solution {
    int digitSum(int num) {
        int sum = 0;

        while(num) {
            sum += num%10;
            num /= 10;
        }

        return sum;
    }
public:
    int minElement(vector<int>& nums) {
        int minEl = 50;

        for(int num : nums) 
            minEl = min(minEl, digitSum(num));

        return minEl;
    }
};