class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> st;
        int rem = nums.size() % 3;

        // checking for last few(0,1,2) numbers
        for(int i=nums.size()-1; i>=(int)(nums.size()-rem); i--){
            if(st.find(nums[i]) != st.end()){
                return nums.size()/3 + 1;
            }
            st.insert(nums[i]);
        }  

        // checking for remaining numbers (multiple of 3)
        for(int i=nums.size()-1-rem; i>=0; i--){
            if(st.find(nums[i]) != st.end()){
                return ceil((double)(i+1)/3);
            }
            st.insert(nums[i]);
        }         

        return 0;
    }
};