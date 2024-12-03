class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        stringstream result;
        int count = 0;

        for (int i=0; i<s.size(); i++) {
            if (count < spaces.size() && i == spaces[count]) {
                result << ' ';
                ++count;
            }

            result << s[i];
        }

        return result.str();
    }
};