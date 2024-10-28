class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<long> st{nums.begin(), nums.end()};
        int maxStreak = -1;

        for(int i : st){
            int streak = 1;
            long long num = i;
            while(num <= LLONG_MAX / num && st.count(num*num) > 0){
                streak++;
                num *= num;
            }
            maxStreak = max(maxStreak, streak);
        }

        return maxStreak < 2 ? -1 : maxStreak;
    }
};