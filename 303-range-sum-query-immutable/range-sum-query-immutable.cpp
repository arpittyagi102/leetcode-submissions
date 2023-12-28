class NumArray {
    vector<int> preSum;
public:
    NumArray(vector<int>& nums) {
        preSum.resize(nums.size());
        preSum[0] = nums[0];
        for(int i=1; i<nums.size(); i++){
            preSum[i] = preSum[i-1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
            return preSum[right];
        return preSum[right]-preSum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */