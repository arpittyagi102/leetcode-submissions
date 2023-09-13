class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        if(pos > haystack.size())
            return -1;
        return pos;
    }
};