class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long total = 0;
        long temp = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                temp++;
            } else if(temp!=0){
                total += (temp*(temp+1))/2;
                temp = 0;
            }
        }

        if(temp!=0){
            total += (temp*(temp+1))/2;
        }

        return total;
    }
};