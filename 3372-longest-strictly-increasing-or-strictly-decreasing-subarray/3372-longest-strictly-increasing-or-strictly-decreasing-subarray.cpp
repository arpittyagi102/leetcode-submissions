class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1;
        int dec = 1;
        int maxInc = inc;
        int maxDec = dec;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                inc++;
                dec = 1;
            } else if (nums[i] > nums[i+1]){
                dec++;
                inc = 1;
            } else {
                inc = 1;
                dec = 1;
            }
            maxInc = max( maxInc, inc );
            maxDec = max( maxDec, dec );
        }

        return max( maxInc, maxDec );
    }
};