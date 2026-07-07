class Solution {
public:
    long long sumAndMultiply(int n) {
        string str = to_string(n);
        int sum = 0;
        long long x = 0;

        for(char c: str) {
            if(c != '0') {
                x *= 10;
                x += c-'0';
                sum += c-'0';
            }
        }

        x *= sum;

        return x;
    }
};