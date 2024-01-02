class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> b(3,0);
        int j = 0;
        
        for(int i: nums){
            b[i]++;
        }

        for(int i=0; i<b[0]; i++,j++){
            nums[j] = 0;
        }
        for(int i=0; i<b[1]; i++,j++){
            nums[j] = 1;
        }
        for(int i=0; i<b[2]; i++,j++){
            nums[j] = 2;
        }
    }
};