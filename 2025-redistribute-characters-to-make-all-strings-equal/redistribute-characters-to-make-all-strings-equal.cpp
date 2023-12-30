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

        auto it = mp.begin();
        for(auto m: mp){
            if(m.second%n != 0)
                return false;
        }

        return true;
    }
};