class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length = strs.size();
        if (length == 0) {
            return "";
        }
        
        int min_length = INT_MAX;
        for (const string& str : strs) {
            min_length = min(min_length, static_cast<int>(str.length()));
        }
        
        for (int i = 0; i < min_length; i++) {
            char curr_char = strs[0][i];
            for (int j = 1; j < length; j++) {
                if (strs[j][i] != curr_char) {
                    return strs[0].substr(0, i);
                }
            }
        }
        
        return strs[0].substr(0, min_length);
    }
};