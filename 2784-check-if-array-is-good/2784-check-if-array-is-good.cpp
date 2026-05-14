class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int lastNumFreq = 0;
        vector<int> freq(n,0);

        for(int i=0; i<nums.size(); i++){
            int value = abs(nums[i]);

            if(value < 1 || value >= n)
                return false;
            
            if(value != n-1 && nums[value-1] < 0)
                return false;
            if(value == n-1 && lastNumFreq > 1)
                return false;

            nums[value-1] *= -1;
            if(value == n-1)
                lastNumFreq++;
        }            

        return lastNumFreq == 2;
    }
};