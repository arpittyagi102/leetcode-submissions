class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // one pass solution
        int a=0, b=1;
        vector<int> temp(nums.size());

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                temp[a] = nums[i];
                a += 2;
            } else {
                temp[b] = nums[i];
                b += 2;
            }
        }

        return temp;
    }
};