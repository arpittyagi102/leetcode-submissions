class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int ans = 0;

        for(int i: nums){
            st.insert(i);
        }

        for(int i: st){
            if(st.find(i-1)==st.end()){
                int k = i;
                while(st.find(++i)!=st.end());
                ans = max(ans,i-k);
            }
        }

        return ans;
    }
};