class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int temp = 1;
        vector<int> ans(n);

        ans[0] = 1;
        for(int i=0; i<n; i++){
            ans[i] = temp; 
            temp *= nums[i];
        }   

        temp = 1;
        for(int i=n-1; i>=0; i--){
            ans[i] *= temp;
            temp *= nums[i];
        }
        
        return ans;
    }
};