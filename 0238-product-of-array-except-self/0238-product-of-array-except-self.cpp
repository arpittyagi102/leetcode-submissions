class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long product=1;
        vector<int> b = nums;
        
        for(int i : nums){
            product*=i;
        }

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                int p = 1;
                for(int j=0; j<b.size(); j++){
                    if(j!=i){
                        cout<<j<<b[j]<<" ";
                        p*=b[j]; 
                    }
                }
                nums[i] = p;
                continue;
            }
            nums[i] = product/nums[i];
        }

        return nums;
    }
};