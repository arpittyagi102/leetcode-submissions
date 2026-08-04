class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> ans;
        int smallest = 101;
        int largest = 0;

        for(int num: nums) {
            if(num > largest) {
                largest = num;
            }
            if(num < smallest) {
                smallest = num;
            }
        }

        for(int i=smallest; i<=largest; i++) {
            if(st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};