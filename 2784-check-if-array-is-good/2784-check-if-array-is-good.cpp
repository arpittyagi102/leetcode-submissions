class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n,0);

        for(int num: nums){
            if(num < 1 || num >= n)
                return false;

            if(num != n-1 && freq[num]>0)
                return false;
            else if(num == n-1 && freq[num]>1)
                return false;

            freq[num]++;
        }            

        return true;
    }
};