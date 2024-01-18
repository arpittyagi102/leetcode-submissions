class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, vector<string>> mp;
        vector<string> ans = {""};
        mp['2'] = {"a","b","c"};
        mp['3'] = {"d","e","f"};
        mp['4'] = {"g","h","i"};
        mp['5'] = {"j","k","l"};
        mp['6'] = {"m","n","o"};
        mp['7'] = {"p","q","r","s"};
        mp['8'] = {"t","u","v"};
        mp['9'] = {"w","x","y","z"};
        
        if(digits.size()==0){
            return {};
        }

        for(char c: digits){
            vector<string> ans2;
            for(string s: ans){
                for(string l: mp[c]){
                    ans2.push_back(s+l);
                }
            }
            ans = ans2;
            ans2 = {};
        }
    
        return ans;
    }
};