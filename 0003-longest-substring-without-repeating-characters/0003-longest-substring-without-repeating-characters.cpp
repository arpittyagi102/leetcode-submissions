class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int right = 0;
        unordered_set<char> mp;
        int max = -1;

        for(right=0; right<n; right++){
            while(mp.contains(s[right])){
                mp.erase(s[left]);
                left++;
            }
            mp.insert(s[right]);
            if(max < right-left)
                max = right-left;
        }

        return max+1;
    }
};