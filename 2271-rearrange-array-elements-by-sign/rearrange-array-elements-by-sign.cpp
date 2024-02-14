class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // Brute Force
        vector<int> pos;
        vector<int> neg;

        for(int i: nums){
            if(i>0){
                pos.push_back(i);
            } else {
                neg.push_back(i);
            }
        }

        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                nums[i] = pos[i/2];
            } else {
                nums[i] = neg[i/2];
            }
        }

        return nums;
    }
};