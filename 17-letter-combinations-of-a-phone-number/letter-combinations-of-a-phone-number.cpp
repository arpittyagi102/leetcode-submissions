class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> chars = {"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans = {""};

        if(digits.size()==0)
            return {};

        for(char c: digits){
            vector<string> ans2;
            for(string s: ans)
                for(char l: chars[c-'0'])
                    ans2.push_back(s+l);
            ans = ans2;
            ans2.clear();
        }
    
        return ans;
    }
};