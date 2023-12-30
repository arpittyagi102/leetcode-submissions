class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char, int> mp;

        for(string str: words){
            for(char c: str){
                mp[c]++;
            }
        }

        for(auto m: mp){
            if(m.second%n)
                return false;
        }

        return true;
    }
};