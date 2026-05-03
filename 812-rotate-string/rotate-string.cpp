class Solution {
    void rotate(string& s) {
        s = s.substr(1, s.size()-1) + s[0];
    }
public:
    bool rotateString(string s, string goal) {
        for(int i=0; i<s.size(); i++) {
            if(s == goal)
                return true;
            rotate(s);
        }

        return false;
    }
};