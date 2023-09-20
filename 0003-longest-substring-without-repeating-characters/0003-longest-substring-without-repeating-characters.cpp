class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int right = 0;
        unordered_map<char,int> mp;
        //set<char> myset;
        int max = -1;

        for(right=0; right<n; right++){
            //cout<<"right = "<<right<<endl;
            while(mp.contains(s[right])){
                //cout<<"map contains "<<s[right]<<endl;
                //cout<<"left = "<<left<<endl;
                mp.erase(s[left]);
                left++;
            }
            //cout<<"adding "<<s[right]<<" to the map\n";
            mp[s[right]] = 0;
            //cout<<"difference = "<<right - left<<endl;
            max = (right-left) > max ? right - left : max; 
        }

        return max+1;
    }
};