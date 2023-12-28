class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = count(text.begin(), text.end(), 'b');
        int a = count(text.begin(), text.end(), 'a');
        int l = count(text.begin(), text.end(), 'l');
        int o = count(text.begin(), text.end(), 'o');
        int n = count(text.begin(), text.end(), 'n');
        int m = min(b,a);
        m = min(m,l/2);
        m = min(m,o/2);
        m = min(m,n);

        return m;
    }
};