class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int right = 0;
        unordered_map<char,int> mp;
        int max = -1;

        for(right=0; right<n; right++){
            cout<<"left = "<<left<<" right = "<<right<<endl;
            if(mp.contains(s[right]) && mp[s[right]]>=left){
                left = mp[s[right]] +1;
                cout<<"map contains "<<s[right]<<", so left = "<<left<<endl;
            }
            cout<<"adding "<<s[right]<<" to the map\ndifference is "<<right - left+1<<endl;
            mp[s[right]] = right;
            if(max < right-left)
                max = right-left;
        }

        return max+1;
    }
};