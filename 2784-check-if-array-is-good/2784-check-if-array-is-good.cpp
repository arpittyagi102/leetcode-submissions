class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_set<int> st;
        bool isLastNum = false;

        for(int num: nums) {
            if(num < 1 || num >= nums.size()){
                return false;
            }

            if(num == nums.size() - 1){
                if(st.contains(num)) {
                    if(isLastNum) {
                        return false;
                    } else {
                        isLastNum = true;
                    }
                }
            } else {
                if(st.contains(num)) {
                    return false;
                }
            }

            st.insert(num);
        }

        return true;
    }
};