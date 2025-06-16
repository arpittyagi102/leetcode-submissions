class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        // Bruteforce
        int maxDiff = -1;

        for(int i=0; i<nums.size(); i++)
            for(int j=i+1; j<nums.size(); j++)
                if(nums[j] > nums[i])
                    maxDiff = max(maxDiff, nums[j] - nums[i]);

        return maxDiff;
    }
};