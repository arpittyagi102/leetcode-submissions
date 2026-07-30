class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size() / 8;
        return (n * (n + 1) * 4) + ((n + 1) * (word.size() % 8));
    }
};