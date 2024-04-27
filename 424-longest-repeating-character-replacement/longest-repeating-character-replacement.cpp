class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int ans = k;
        int left = 0;
        int right = k;
        int maxCharCount = 0;
        char maxChar = 'x';

        for(int i=0; i<k; i++){
            mp[s[i]]++;
        }

        while(right <= s.size()){
            //cout<<s.substr(left, right - left)<<" ";
            if(right - left - maxCharCount <= k){
                ans = max(ans, right-left);
            //    cout<<"O\n";
            } else {
            //    cout<<"X\n";
            //    cout<<"right="<<right<<" left="<<left<<" maxCharCount="<<maxCharCount<<endl;
                mp[s[left]]--;
                left++;
            }
            mp[s[right]]++;
            right++;
            maxCharCount = 0;
            for(const auto m: mp){
                if(maxCharCount < m.second){
                    maxCharCount = m.second;
                    maxChar = m.first;
                }
            }
            //cout<<"mc="<<maxChar<<" mcc"<<maxCharCount<<endl;
        }

        return ans;
    }
};