class Solution {
public:
    long long minimumSteps(string s) {
        int slow = 0;
        long long ans = 0;

        for(int fast = 0; fast<s.size(); fast++){
            if(s[fast]=='0'){
                ans += fast - slow;
                slow++;
            }
        }

        return ans;
    }
};