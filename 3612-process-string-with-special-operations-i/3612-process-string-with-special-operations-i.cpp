class Solution {
public:
    string processStr(string s) {
        string result = "";

        for(int i=0; i<s.size(); i++)
            if(s[i] == '*') {
                if(result.size() > 0)
                    result.pop_back();
            }
            else if(s[i] == '#')
                result = result + result;
            else if(s[i] == '%')
                reverse(result.begin(), result.end());
            else 
                result.push_back(s[i]);

        return result;
    }
};