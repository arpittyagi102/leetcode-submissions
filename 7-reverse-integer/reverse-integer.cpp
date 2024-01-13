class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        long long k = x;
        bool flag = true;

        if(k < 0){
            k *= (-1);
            flag = false;
        }
        
        while(k > 0){
            int r = k % 10;
            k /= 10;
            ans = ans*10 + r;
            if(ans > INT_MAX || ans < INT_MIN){
                return 0;
            }
        }

        return flag ? ans : ans*(-1);
    }
};