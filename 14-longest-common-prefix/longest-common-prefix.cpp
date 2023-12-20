class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        
        string s = strs[0];

        for(string str : strs){
            while(str.find(s) != 0){
                s = s.substr(0,s.size()-1);
            }
        }

        return s;
    }
};