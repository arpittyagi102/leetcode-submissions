class Solution {
    bool helper(char a1, char a2, char b1, char b2) {
        if(a1 == b1 && a2 == b2)
            return true;
        if(a1 == b2 && a2 == b1)
            return true;
        return false;
    }
public:
    bool canBeEqual(string s1, string s2) {
        return helper(s1[0], s1[2], s2[0], s2[2]) 
            && helper(s1[1], s1[3], s2[1], s2[3]);
    }
};