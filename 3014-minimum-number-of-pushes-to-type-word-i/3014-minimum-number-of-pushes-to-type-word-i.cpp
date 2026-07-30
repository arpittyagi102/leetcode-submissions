int LUT[27] = {0,  1,  2,  3,  4,  5,  6,  7,  8,  10, 12, 14, 16, 18,
               20, 22, 24, 27, 30, 33, 36, 39, 42, 45, 48, 52, 56};
class Solution {
public:
    int minimumPushes(string word) { return LUT[word.size()]; }
};