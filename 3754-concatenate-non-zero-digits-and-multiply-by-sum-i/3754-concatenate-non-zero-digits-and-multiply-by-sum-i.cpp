class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        int sum = 0;
        int r;
        int pow10 = 1;

        while(n) {
            r = n%10;

            sum += r;
            if(r) {
                x += r * pow10;
                pow10 *= 10;
            }

            n /= 10;
        }

        x *= sum;

        return x;
    }
};