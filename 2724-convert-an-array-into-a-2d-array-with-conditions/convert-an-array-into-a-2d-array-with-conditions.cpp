class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_set<int> st;
        vector< vector<int>> ans;
        while(nums.size()){
            vector<int> temp;
            for(int i: nums){
                if(!st.insert(i).second)
                    temp.push_back(i);
            }

            ans.push_back(vector<int>(st.begin(),st.end()));
            nums = temp;
            st.clear();
        }

        return ans;
    }
};